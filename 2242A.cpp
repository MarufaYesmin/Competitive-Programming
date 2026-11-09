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
    ll n,count=0; cin>>n;
    vector<ll> v(n);
    for(auto &a:v){
        cin>>a;
        if(a>=2) count++;
    }
    if(n==1){
        v[0]>=3? yes:no;
        return;
    }

    for(ll i=0;i<n;i++){
        if(v[i]>=3){
            yes; return;
        }
    }
    count>=2? yes:no;
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