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
    vector<ll> a(n);
    for (auto &x:a) cin>>x;

    vector<ll> b(n);
    for (auto &x:b) cin>> x;

    set<ll> st;
    for (ll i=0;i<n;i++) {
        st.insert(i);
    }

    vector<ll> pos(n);
    for (ll i=0;i<n;i++) {

        ll need = lower_bound(b.begin(), b.end(), a[i]) - b.begin();

        auto it = st.lower_bound(need);

        if (it == st.end()) {
            cout << -1 << endl;
            return;
        }
        pos[i] = *it;
        st.erase(it);
    }

    ll ans = 0;

    for (ll i=0;i<n;i++) {
        for (ll j=i+1;j<n;j++) {
            if (pos[i]>pos[j]) {
                ans++;
            }
        }
    }
    cout<<ans<<endl;
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