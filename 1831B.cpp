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


void abcd(){
    ll n; 
    cin >> n;
    vector<ll> a(n), b(n);
    
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) cin >> b[i];

    vector<ll> max_a(2 * n + 1, 0), max_b(2 * n + 1, 0);

    ll count = 1;
    for(ll i = 0; i < n; i++){
        if(i == n - 1 || a[i] != a[i + 1]){
            max_a[a[i]] = max(max_a[a[i]], count);
            count = 1;
        } else {
            count++;
        }
    }

    count = 1;
    for(ll i = 0; i < n; i++){
        if(i == n - 1 || b[i] != b[i + 1]){
            max_b[b[i]] = max(max_b[b[i]], count);
            count = 1;
        } else {
            count++;
        }
    }

    ll ans = 0;
    for(ll i = 1; i <= 2 * n; i++){
        ans = max(ans, max_a[i] + max_b[i]);
    }

    cout << ans << "\n";
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