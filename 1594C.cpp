#include <bits/stdc++.h>
using namespace std;

void abcd() {
    int n;  char ch;
    cin >> n >> ch;
    string s;  cin >> s;

    bool all_same = true;
    for (char c : s) {
        if (c != ch) {
            all_same = false;
            break;
        }
    }

    if (all_same) {
        cout << 0 << "\n";
        return;
    }

    for (int x = n / 2 + 1; x <= n; x++) {
        if (s[x - 1] == ch) {
            cout << 1 << "\n" << x << "\n";
            return;
        }
    }

    cout << 2 << "\n" << n - 1 << " " << n << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        abcd();
    }
    return 0;
}