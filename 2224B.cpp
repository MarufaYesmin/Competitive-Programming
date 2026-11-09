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
    //mex-array er mddhe je number gulo nei tader mddhe minimum
    //array er numbers gulor mddhe maximum
 
    ll n; cin >> n;
    vector<ll> arr(n);
    map<ll, ll> mp;
    ll mx = -1;

    for(ll i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
        if(arr[i] > mx) mx = arr[i];
    }

    vector<ll> v;
    v.push_back(mx);
    mp[mx]--;

    ll cur = 0;
    while(mp[cur] > 0) {
        v.push_back(cur);
        mp[cur]--;
        cur++;
    }

     for(auto const& x : mp) {
        ll val = x.first;
        ll count = x.second;
        while(count > 0) {
            v.push_back(val);
            count--;
        }
    }

    ll mex = 0, ans = 0;
    set<ll> s;
    for(ll i = 0; i < n; i++){
        s.insert(v[i]);
        while(s.count(mex)) mex++;
        ans += (mex + mx);
    }
    cout << ans << endl;
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