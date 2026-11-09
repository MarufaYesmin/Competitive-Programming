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
    ll n,t; cin>>n>>t;

    vector<ll> v(n);
    for(auto &a:v) cin>>a;

    ll current=1;
    for(ll i=0;i<n-1;){
        if(current==t){
            break;
        }
        current+=v[i];
            i+=v[i];
        
    }
    cout<<(current==t? "YES":"NO");
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}