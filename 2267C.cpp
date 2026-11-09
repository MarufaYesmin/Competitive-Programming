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

vector<ll> prmFac;

void primeFactor(ll n){
    prmFac.clear();
    for(ll i=2; i*i<=n; i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
            }
            prmFac.push_back(i);
        }
    }
    if(n>1) prmFac.push_back(n);
}

void abcd(){
    ll n,x; cin>>n>>x;
    vector<ll> v(n);
    for(auto &a:v) cin>>a;

    if(x==1){
        cout<<0<<endl;
        return;
    }

    primeFactor(x);

    ll ans=0;

    for(ll i=0;i<prmFac.size();i++){
        ll sum=0;
        for(ll j=0;j<n;j++){
            if(v[j]%prmFac[i]==0){
                sum+=v[j];
            }  
        }
        ans=max(ans,sum);
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