#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void abcd() {
    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);

    for (auto &x : v)
        cin >> x;

    sort(v.begin(), v.end());

    ll left = 0;
    ll right = n - 1;

    while (k--) {
        if (v[left] + v[left + 1] < v[right])
            right--;
        else
            left += 2;
    }

    ll ans = 0;

    for (ll i = left; i <= right; i++)
        ans += v[i];

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
        abcd();

    return 0;
}