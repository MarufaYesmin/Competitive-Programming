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

    sort(v.begin(),v.end());

    ll x=v[0]*v[n-1];

    vector<ll> z;
    for(ll i=2;i*i<=x;i++){
        if(x%i==0){
            z.push_back(i);
            if(i*i != x) z.push_back(x/i);
        }
    }
    sort(z.begin(),z.end());
    
    cout<<(v!=z? -1:x)<<endl;
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