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
    map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        ll x; cin>>x;
        ll msb=__lg(x); //__lg() last msb return kore orthat last konjaygay 1 ache seta return kore
        mp[msb]++;
    }
    ll ans=0;
    for(ll i=0;i<=31;i++){ // 31 bit porjonto hishab korbe
        if(mp[i]>=2){
            ans+= (mp[i]*(mp[i]-1))/2;
        }
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