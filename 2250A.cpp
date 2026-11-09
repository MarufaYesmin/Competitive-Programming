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

    if(n%2==1){
        no; return;
    }

    ll even=0, odd=LLONG_MAX; 
    for(ll i=0;i<n;i++){
        if(i%2==0) odd=min(odd,v[i]);
        else even=max(even,v[i]);
    }
    (odd - even >= 2)? yes:no;
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