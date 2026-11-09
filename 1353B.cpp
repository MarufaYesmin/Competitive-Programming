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
    int n, k; cin >> n >> k;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());

    for (int i = 0; i < k; i++) {
        if (b[i] > a[i]) {
            swap(a[i], b[i]);
        } else {
            break;
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    cout << sum << "\n";
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