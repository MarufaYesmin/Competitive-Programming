#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void abcd() {
    ll n, x;
    cin >> n >> x;

    vector<ll> v(n);
    ll sum = 0;

    for (auto &a:v) {
        cin>>a;
        sum+=a;
    }

    if (sum%x!=0) {
        cout<<n<<endl;
        return;
    }

    ll L=-1,R =-1;

    for (ll i=0;i<n;i++) {
        if (v[i]%x!=0) {
            L=i;
            break;
        }
    }

    for (ll i=n-1;i>=0;i--) {
        if (v[i]%x!=0) {
            R=i;
            break;
        }
    }

    if (L==-1) {
        cout<<-1<<endl;
        return;
    }
    cout<<max(n-L-1,R)<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        abcd();
    }
}