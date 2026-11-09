#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll GCD(ll a, ll b){
    if(b == 0) return a;
    return GCD(b, a % b);
}

void abcd(){
    ll a,b,k;
    cin >> a >> b >> k;

    ll g = GCD(a,b);

    cout << ((a/g <= k && b/g <= k) ? 1 : 2) << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        abcd();
    }
}