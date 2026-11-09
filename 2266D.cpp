#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;
using vll = vector<ll>;
using sll = set<ll>;
#define all(u) (u).begin(),(u).end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"

const ll N = 2e5 + 5;
vll spf(N);

void buildSpf(){
    for(ll i=1;i<N;i++){
        spf[i]=i;
    }

    for(ll i=2;i*i<N;i++){
        if(spf[i]==i){
            for(ll j=i*i;j<N;j+=i){
                if(spf[j] == j){
                    spf[j] = i;
                }
            }
        }
    }
}

ll solve(ll x,ll k,vector<ll> &dp){
    if(x<=k) return 0;

    if(dp[x] != -1) return dp[x];
    ll ans=LLONG_MAX;
    ll temp=x;

    while(temp>1){
        ll p=spf[temp];

        ans=min(ans,1+p*solve(x/p,k,dp));

        while(temp%p==0){
            temp/=p;
        }
    }

    return dp[x]=ans;
}

void abcd(){
   ll n,k; cin>>n>>k;

    vll a(n);
    for(auto &x:a) cin>>x;

    vll dp(n+1,-1);

    ll answer=0;
    for(auto x:a)  answer+=solve(x,k,dp);

    cout<<answer<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    buildSpf();
    ll t;
    cin >> t;
    while(t--){
        abcd();
    }
    return 0;
}