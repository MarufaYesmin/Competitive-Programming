#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"

void abcd(){
    ll n,m; cin>>n>>m;
    vector<ll> a(n),b(m);
    for(auto &p:a) cin>>p;
    for(auto &p:b) cin>>p;

    ll beaH=a[0]+n-1;
    ll verH=b[0]+m-1;

    if(beaH>=verH) cout<<1<<endl;
    else cout<<2<<endl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    while(t--) abcd();
}