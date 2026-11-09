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

    if(n==1){
        cout<<0<<endl;
        return;
    }

    ll x=*max_element(v.begin()+1,v.end());
    ll mx=x-v[0];

    x=*min_element(v.begin(),v.end()-1);
    mx=max(v[n-1]-x,mx);

    mx=max(mx,(v[n-1]-v[0]));
    for(ll i=1;i<n;i++){
        mx=max(mx,v[i-1]-v[i]);
    }
    cout<<mx<<endl;
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