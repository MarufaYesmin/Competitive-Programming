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
    ll mx=LLONG_MIN,mn=LLONG_MAX;

    for(ll i=0;i<4;i++){
        ll x,y; cin>>x>>y;

        mn=min(mn,x);
        mx=max(mx,x);
    }
    ll ans=mx-mn;
    cout<<ans*ans<<endl;
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