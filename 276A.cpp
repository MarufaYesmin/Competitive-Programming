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

    vector<pair<ll,ll>> v(n);
    for(ll i=0;i<n;i++) cin>>v[i].first>>v[i].second;

    ll mx=LLONG_MIN;

    for(ll i=0;i<n;i++){
        if(v[i].second>k) mx=max(mx,v[i].first-(v[i].second-k));
        else mx=max(mx,v[i].first);
    }

    cout<<mx<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
   abcd();
}