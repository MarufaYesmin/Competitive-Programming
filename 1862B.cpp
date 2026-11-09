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
    vector<ll> v;

    ll prev; cin>>prev;
    v.push_back(prev);

    for(ll i=1;i<n;i++){
        ll x; cin>>x; 

        if(x<prev) v.push_back(x);
        v.push_back(x);  prev=x;
    }
    cout<<v.size()<<endl;
    for(ll i:v) cout<<i<<' ';
    cout<<endl;
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