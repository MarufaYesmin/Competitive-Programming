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

    vector<ll> mp(10000005, 0); 
    ll mx=0;
    
    for(int i=0;i<n;i++){
        ll x; cin>>x;
        mp[x]++;
        mx = max(mx,x);
    }
    
    vector<bool> v(mx+1, true);
    v[0] = v[1] = false;
    
    vector<ll> p(mx+1, 0); 
    
    for(ll j=2; j<=mx; j++){
        if(v[j] == true){
            for(ll i=j; i<=mx; i+=j){ 
                p[j] += mp[i];
            }
        }
    }

    vector<ll> pref(mx+1, 0); 
    for(ll i=1; i<=mx; i++){ 
        pref[i] = pref[i-1] + p[i];
    }

    ll m; cin>>m; 
    while(m--){
        ll left, right;
        cin>>left>>right;

        left = min(left, mx);
        right = min(right, mx);

        if(left > right) {
            cout << 0 << endl;
        } else {
            cout << pref[right] - pref[left-1] << endl; // left এর বদলে left-1
        }
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
   abcd();
}