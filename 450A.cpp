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
    ll n,m; cin>>n>>m;
    vector<ll> v(n);
    for(auto &a:v) cin>>a;

    ll cnt=(v[0]+m-1)/m,ans=0;
    for(ll i=1;i<n;i++){
        ll x=(v[i]+m-1)/m;
        if(x>=cnt){
             cnt=x;
             ans=i;
        }
    }
    cout<<ans+1<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}