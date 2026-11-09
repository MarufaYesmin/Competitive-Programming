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
    ll n,ans=0; cin>>n;

    ll neg=0,mn=LLONG_MAX;

    for(ll i=0;i<n;i++){
        ll x; cin>>x;

        if(x<0) neg++;
        ans+=abs(x);
        mn=min(mn,abs(x));
    }
    if(neg&1) ans-=(2*mn);
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