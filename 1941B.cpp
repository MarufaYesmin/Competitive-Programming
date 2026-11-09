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

    for(ll i=0;i<n-2;i++){
        v[i+1] -= (2*v[i]); v[i+2] -= v[i]; v[i]=0; 
        if(v[i+1]<0 || v[i+2]<0){
            no; return;
        }
    }
    v[n-1]!=0 || v[n-2]!=0 ? no : yes;
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