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
    string s;
    cin >> s;
    ll n = s.length();


    for (ll i = 0; i < n; i++) {
        ll num1 = s[i] - '0';
        if (num1 % 8 == 0) { 
            yes;
            cout << num1 << endl;
            return;
        }
        for (ll j = i + 1; j < n; j++) {
            ll num2 = s[j] - '0';
            if (((num1 * 10) + num2) % 8 == 0) {
                yes;
                cout << s[i] << s[j] << endl;
                return;
            }
            for (ll k = j + 1; k < n; k++) { 
                ll num3 = s[k] - '0';
                if (((num1 * 100) + (num2 * 10) + num3) % 8 == 0) {
                    yes;
                    cout << s[i] << s[j] << s[k] << endl;
                    return;
                }
            }
        }
    }

    no;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
        abcd();
}