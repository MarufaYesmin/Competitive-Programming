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
    vector<ll> a(n);
    for(auto &p:a) cin>>p;
    vector<ll> b(n);
    for(auto &p:b) cin>>p;

    ll x=0,y=0;
    bool is=true;

    for(ll i=0;i<n;i++){
        ll d=b[i]-a[i];
        ll c=((i+1)%2==1)? -d:d;

        if((i+1)%2==1){
            x = y - c;
            if(x<0) is=false;
        } else {
            y=x+c;
            if(y<0)is=false;
        }
    }
    if(is) yes;
    else no;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        abcd();
    }
    return 0;
}