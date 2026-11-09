#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void abcd(){
    ll n; 
    cin >> n;

    ll count0 = 0, count1 = 0, count2 = 0;

    for(ll i = 0; i < n; i++){
        ll x;
        cin >> x;
        if(x == 0) count0++;
        else if(x == 1) count1++;
        else count2++;
    }

    ll ans = 0;
    ans += count0;

    ll pairs = min(count1, count2);
    ans += pairs;
    count1 -= pairs;
    count2 -= pairs;

    ans += count1 / 3;
    ans += count2 / 3;

    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while(t--){
        abcd();
    }
}