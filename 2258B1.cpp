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
    vector<ll> freq(2*m+1,0);
    vector<ll> v(n);
    for(auto &a:v){
        cin>>a;
        freq[a]++;
    } 

    vector<ll> suf(2*m+1,0);
    for(ll i=m;i>=1;i--){
        suf[i]=suf[i+1]+freq[i];
    }

    ll maximum=LLONG_MIN;
    for(ll i=1;i<=m;i++){
        ll x=suf[i]+freq[2*i];
        maximum=max(maximum,x);
    }
    cout<<maximum<<endl;
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