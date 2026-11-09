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

    for(ll i=2;i<=100;i++){
        for(ll j=0;j<n;j++){
            if(__gcd(i,v[j])==1){
                cout<<i<<endl;
                return;
            }
        }
    }
    cout<<"-1"<<endl;
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