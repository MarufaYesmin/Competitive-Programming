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
    ll n,k,q; cin>>n>>k>>q;
    vector<ll> v(n);
    for(auto &a:v) cin>>a;

    ll count=0;
    for(ll i=0;i<n;i++){
        if(v[i]<=q) count++;
    }
    if(count<k) cout<<0<<endl;
    else{
        cout<<pow(2,n)-pow(2,k)<<endl;
    }
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