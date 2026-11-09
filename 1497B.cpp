
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
    vll v(n); for(auto &a:v) cin>>a;

    unordered_map<ll,ll> mp;

    for(ll i=0;i<n;i++){
        v[i]=v[i]%m;
        mp[v[i]]++;
    }

    ll count=0;

    if(mp[0]>0) count++;

    for(ll r=1;r<m-r;r++){
        ll x=mp[r];
        ll y=mp[m-r];

        if(x>0 || y>0){
            count+=1+max(0LL,abs(x-y)-1);
        }
    }

    if(m%2==0 && mp[m/2]>0){
        count++;
    }

    cout<<count<<endl;
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
