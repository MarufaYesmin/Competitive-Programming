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

ll gcd(ll a,ll b) {
    return b==0? a:gcd(b,a%b);
}

void abcd(){
    ll n,x,y;
    cin>>n>>x>>y;
    vector<ll> v(n);
    for(auto &a:v) cin>>a;

    ll g=gcd(x,y);
    for(ll i=0;i<n;i++){
        ll trgt=v[i]-1;
        if (i%g!=trgt%g){
            no; 
            return;
        }
    }
    yes;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        abcd();
    }
    return 0;
}