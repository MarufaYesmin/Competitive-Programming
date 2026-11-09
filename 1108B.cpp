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
    unordered_map<ll,ll> mp(n);
    ll mx=LLONG_MIN;
    for(ll i=0;i<n;i++){
        ll x; cin>>x;
        mp[x]++;
        mx=max(mx,x);
    }
    for(ll i=1;i*i<=mx;i++){
        if(mx%i==0){
            mp[i]--;
            
            if(mx/i != i) mp[mx/i]--;
        }
    }

    ll second=LLONG_MIN;
    for(auto &a:mp){
        if(a.second>0) second=max(second,a.first);
    }

    cout<<mx<<" "<<second<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}