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
    string s; cin>>s;
    ll m; cin>>m;

    ll n=s.length();

    vector<bool> v(n,false);

    for(ll i=0;i+1<n;i++){
        if(s[i]==s[i+1]) v[i]=true;
    }

    vector<ll> pre(n,0);

    for(ll i=1;i<n;i++){
        pre[i]=pre[i-1];

        if(s[i]==s[i-1]) pre[i]++;
    }

    while(m--){
        ll x,y; cin>>x>>y;

        cout<<pre[y-1]-pre[x-1]<<endl;
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}