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

    map<ll,ll> mp;

    for (ll i = 0; i < n; i++) {
        ll x;  cin >> x;
        mp[x]++;
    }
    
    if (mp.size() >= 3) {
        no;
    } 
    else if (mp.size() == 1) {
      yes;
    } 
    else {
        auto it = mp.begin();
        ll cnt1 = it->second;
        it++;
        ll cnt2 = it->second;
        
        if (abs(cnt1 - cnt2) <= 1) {
            yes;
        } else {
            no;
        }
    }
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