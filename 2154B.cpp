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

    v[1]=max(v[0],v[1]);
    for(ll i=3;i<n;i+=2){
        v[i]=max({v[i],v[i-1],v[i-2]});
    }

    ll ans=0;

    for(ll i=0;i<n;i+=2){
        if(i==0) ans += max(0LL,v[i]-v[i+1]+1);
        else if(i==n-1) ans += max(0LL,v[i]-v[i-1]+1);
        else{
            ans += max(0LL,v[i]-min(v[i-1],v[i+1])+1);
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