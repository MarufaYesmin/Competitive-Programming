#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl "\n"

void abcd(){
    ll n,q; cin>>n>>q;
    string a,b; cin>>a>>b;

    vector<vector<ll>> preA(n + 1, vector<ll>(26, 0));
    vector<vector<ll>> preB(n + 1, vector<ll>(26, 0));

    for(ll i = 1; i <= n; i++){
        for(char ch = 'a'; ch <= 'z'; ch++){
            preA[i][ch - 'a'] = preA[i - 1][ch - 'a'];
            if(a[i - 1] == ch){
                preA[i][ch - 'a'] += 1;
            }

            preB[i][ch - 'a'] = preB[i - 1][ch - 'a'];
            if(b[i - 1] == ch){
                preB[i][ch - 'a'] += 1;
            }
        }
    }

    while(q--){
        ll l, r; cin >> l >> r;

        ll diff_sum = 0;

        for(int ch = 0; ch < 26; ch++){
            ll countA = preA[r][ch] - preA[l - 1][ch];
            ll countB = preB[r][ch] - preB[l - 1][ch];

            diff_sum += abs(countA - countB);
        }
    
        cout << diff_sum / 2 << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--){
        abcd();
    }
    return 0;
}