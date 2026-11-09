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
    ll n; 
    cin >> n;
    vector<ll> v(n), prefix1(n), prefix2(n);

    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        if (i == 0) prefix1[i] = v[i];
        else prefix1[i] = prefix1[i-1] + v[i];
    }

    vector<ll> s = v;
    sort(s.begin(), s.end());

    for (ll i = 0; i < n; i++) {
        if (i == 0) prefix2[i] = s[i];
        else prefix2[i] = prefix2[i-1] + s[i];
    }

    ll m; 
    cin >> m;

    while (m--) {
        ll type,l,r,ans=0; cin>>type>>l>>r;

        l--, r--;

        if (type == 1) {
            if (l == 0) ans = prefix1[r];
            else ans = prefix1[r] - prefix1[l-1];
        } 
        else {
            if (l == 0) ans = prefix2[r];
            else ans = prefix2[r] - prefix2[l-1];
        }
        cout<<ans<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    abcd();
}