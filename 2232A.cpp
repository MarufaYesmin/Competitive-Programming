#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;
using vll = vector<ll>;
using sll = set<ll>;
#define all(u) (u).begin(), (u).end()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl "\n"

void abcd() {
    ll n; cin >> n;
    vll v(n);
    for (auto &a:v) cin>>a;

    sort(all(v));

    vll v1;
    for (ll i=0;i<n;i++) {
        if (i==0 || v[i]!=v[i - 1])
            v1.push_back(v[i]);
    }

    ll sz = v1.size();

    for (ll i = 0;i<sz-1;i++) {
        if (v1[i]+1<v1[i+1])
            v1.push_back(v1[i]+1);
    }

    ll ans = n;

    for (auto x:v1) {
        ll l = 0, r = 0;
        for (auto a : v) {
            if (a<x) l++;
            else if (a>x) r++;
        }
        ans = min(ans,max(l,r));
    }

    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        abcd();
    }
}