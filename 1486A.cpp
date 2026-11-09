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
    vector<ll> v(n);
    for(auto &a:v) cin>>a;

    vector<ll> pre(n,0);
    pre[0]=v[0];
    for(ll i=1;i<n;i++)  pre[i]=pre[i-1]+v[i];
    for(ll i=0;i<n;i++){
        ll min_needed=i*(i+1)/2;
        if(pre[i]<min_needed){
            no; return;
        }
    }
    yes;
    
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