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

ll Calculate(ll x,ll m,unordered_map<ll,ll> &mp){
    ll countx = 0;

    for(ll i=1; x*i<=m; i++){
        if(mp[x*i]==1) countx += 6;
        else if(mp[x*i]==2) countx += 3;
        else countx += 2;
    }

    return countx;
}

void addMultiples(ll x, ll m, unordered_map<ll,ll>& mp){
    for(ll i=1; x*i<=m; i++){
        mp[x*i]++;
    }
}

void abcd(){
    ll a,b,c,m; cin>>a>>b>>c>>m;

    unordered_map<ll,ll> mp;

    addMultiples(a,m,mp);
    addMultiples(b,m,mp);
    addMultiples(c,m,mp);
    
    cout<<Calculate(a,m,mp)<<' '<<Calculate(b,m,mp)<<' '<<Calculate(c,m,mp)<<endl;
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