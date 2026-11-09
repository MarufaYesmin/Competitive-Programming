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


void abcd() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<pair<int, int>> runs;
    for (int i = 0; i < n; i++) {
        if (runs.empty() || runs.back().first != v[i]) {
            runs.push_back({v[i], 1});
        } else {
            runs.back().second++;
        }
    }

    int m = runs.size();

    bool can_plus_2 = false;
    for (int i = 0; i < m - 1; i++) {
        if (runs[i].second >= 2 && runs[i + 1].second >= 2) {
            can_plus_2 = true;
            break;
        }
    }

    if (can_plus_2) {
        cout << m + 2 <<endl;
        return;
    }

    bool can_plus_1 = false;
    for (int i = 0; i < m; i++) {
        if (runs[i].second >= 2) {
            bool left_swap = (i >= 1) && (i == 1 || runs[i - 2].first!=runs[i].first);
            bool right_swap = (i <= m - 2) && (i == m - 2 || runs[i + 2].first!=runs[i].first);
            if (left_swap || right_swap) {
                can_plus_1=true;
                break;
            }
        }
    }

    if (can_plus_1) {
        cout<<m+1<<endl;
    } else {
        cout<<m<<endl;
    }
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        abcd();
    }
}