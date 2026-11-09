#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int N = 1e5 + 10;

ll cnt[N];
ll dp[N];

ll func(ll x){

    if(x == 0) return 0;

    if(x == 1) return cnt[1];

    if(dp[x] != -1) return dp[x];
    
    ll not_take = func(x - 1);

    ll take = func(x - 2) + cnt[x] * x;

    return dp[x] = max(take, not_take);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(dp, -1, sizeof(dp));

    ll n; cin >> n;

    ll x;
    ll mx = 0;

    for(ll i = 0; i < n; i++){

        cin >> x;

        cnt[x]++;

        mx = max(mx, x);
    }
    cout << func(mx) << endl;
}