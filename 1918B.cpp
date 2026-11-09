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

    vector<pair<ll,ll>> v(n);
    for(ll i=0;i<n;i++) cin>>v[i].first;
    for(ll i=0;i<n;i++) cin>>v[i].second;

    sort(v.begin(),v.end());

    for(ll i=0;i<n;i++) cout<<v[i].first<<' ';
    cout<<endl;
    for(ll i=0;i<n;i++) cout<<v[i].second<<' ';
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