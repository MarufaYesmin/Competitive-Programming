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

    sort(v.begin(), v.end());

    for (int i=0;i+2<n;i++) {
       if (v[i]+v[i+1]>v[i+2]){
           yes;
           return;
       }
    }
    no;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    
        abcd();
    
}