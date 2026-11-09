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
    ll n,m; cin>>n>>m;
    vll a(n); for(auto &p:a) cin>>p;
    vll b(m); for(auto &p:b) cin>>p;

    if(n < 2*m){
        no;
        return;
    }

    sort(all(a));
    sort(all(b));

    for(ll j=0;j<m;j++){
        if(a[j]>=b[j]){
            no;
            return;
        }
    }

    for(ll j=0;j<m;j++){
        if(a[n-m+j]<=b[j]){
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
}