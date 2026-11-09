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
    vector<ll> a(n),b(n),x(n);
    for(auto &p:b) cin>>p;

    x[0]=0;
    a[0]=b[0]+x[0];
    for(ll i=1;i<n;i++){
        x[i]=max(x[i-1],a[i-1]);
        a[i]=b[i]+x[i];
    }
    for(auto &p:a) cout<<p<<' ';
    cout<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}