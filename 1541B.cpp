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
    vector<ll> v(n+1);
    for(ll i=1;i<=n;i++) cin>>v[i];

    ll count=0;
    for(ll i=1;i<=n;i++){
        for(ll j=v[i];j<=2*n;j+=v[i]){
            ll k=j-i;
            if(k<=n && k>i){
                if(v[i]*v[k]==i+k) count++;
            }
        }
    }
    cout<<count<<endl;
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