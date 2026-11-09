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
    vll v(n);
    for(auto &a : v) cin >> a; 

    string s; cin>>s;

    vll pref(n + 1, 0);
    for(ll i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + v[i];
    }

    ll l = 0, r = n - 1;
    ll total_sum = 0;

    while(l < r) {
        while(l < r && s[l] != 'L') l++;
        while(l < r && s[r] != 'R') r--;
        
        if(l < r) {
            total_sum += (pref[r + 1] - pref[l]);
            l++;
            r--;
        }
    }

    cout << total_sum << endl;
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