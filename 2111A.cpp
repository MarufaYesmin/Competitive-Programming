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
     ll x;
        cin >> x;

        ll a = 0, b = 0, c = 0;
        ll ans = 0;

        while (min({a, b, c}) < x) {
            if (a <= b && a <= c) {
                a = min(b, c) * 2 + 1;
            } else if (b <= a && b <= c) {
                b = min(a, c) * 2 + 1;
            } else {
                c = min(a, b) * 2 + 1;
            }
            ans++;
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