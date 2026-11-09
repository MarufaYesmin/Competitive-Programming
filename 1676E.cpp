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
    ll n, k;
    cin >> n >> k;
    
    vector<ll> vn(n);
    for(ll &a : vn) cin >> a;

    sort(vn.begin(), vn.end(), greater<ll>());

    vector<ll> prefix_sums(n);
    prefix_sums[0] = vn[0];
    for(ll i = 1; i < n; i++) {
        prefix_sums[i] = vn[i] + prefix_sums[i - 1];
    }

    for(int i = 0; i < k; i++) {
        ll target;
        cin >> target;
        
        auto it = lower_bound(prefix_sums.begin(), prefix_sums.end(), target);
        
        if (it != prefix_sums.end()) {
            cout << distance(prefix_sums.begin(), it) + 1 << endl;
        } else {
            cout << "-1" << endl;
        }
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