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

    ll k=0;
    for(ll i=1;i<n;i++){
     k=max(k,v[i-1]-v[i]);
    }

    bool ok=true;

    for(int i=1;i<n;i++){
        if(v[i-1]>v[i]) v[i]+=k;
        if(v[i-1]>v[i]){
          ok= false;
          break;
         }
    }
    ok? yes:no;
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