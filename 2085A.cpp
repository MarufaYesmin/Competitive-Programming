#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl "\n"

bool isPalindrome(string s) {
    string r = s;
    reverse(r.begin(), r.end());
    return s == r;
}

void solve() {
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    if (k == 0 || isPalindrome(s)) {
        cout << 1 << endl;
    } else {
        cout << 2 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}