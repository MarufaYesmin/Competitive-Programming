#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        ll n, t, s;
        cin >> n >> t >> s;
        string str;
        cin >> str;

        ll l = 0;   // minimum possible occupied tables
        ll r = 0;   // maximum possible occupied tables
        ll ans = 0; // maximum seated people

        for (char c : str) {
            if (c == 'A') {
                if (ans == t * s) continue; // all seats are full

                ans++;
                if (ans > l * s) l++;
                r = min(t, r + 1);
            } 
            else if (c == 'I') {
                if (l == t) continue; // even the minimum occupied tables already uses all tables

                ans++;
                l++;
                r = min(t, r + 1);
            } 
            else { // 'E'
                if (ans == r * s) continue; // no free seat in the maximum state

                ans++;
                if (ans > l * s) l++;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}