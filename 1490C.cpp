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

bool isCube(ll n){
    ll cb=cbrt(n);
    return cb*cb*cb==n;
}

void abcd(){
    ll x; cin>>x;

    for(ll i=1;i*i*i<x;i++){
        if(isCube(x-(i*i*i))){
            yes; return;
        }
    }
    no;
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