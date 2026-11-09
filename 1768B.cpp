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
    ll n,k; cin>>n>>k;
    vector<ll> v(n);
    for(auto &a:v) cin>>a;

    ll i=1;
    for(ll j=0;j<n;j++){
        if(v[j]==i) i++;
    }

    cout<<(n-i+1+k-1)/k<<endl;
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