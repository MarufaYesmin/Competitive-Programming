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

void abcd(){
    ll n; cin>>n;
    vector<ll> v(n);
    for(auto &a:v) cin>>a;

    vector<ll> dp(n,-1);

    ll ans=0;
    for(ll i=n-1;i>=0;i--){  // using dp
        ll j=i+v[i];

        if(j<n){
            dp[i]=v[i]+dp[j];
        }
        else{
            dp[i]=v[i];
        }
    
        ans=max(ans,dp[i]);
    }
    cout<<ans<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        abcd();
    }
}