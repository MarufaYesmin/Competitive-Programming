#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"

void abcd() {
    ll n,k; 
    cin>>n>>k;

    if (k==n-1) {
        cout<<-1<<endl;
        return;
    }

    ll num_zero=n/2;
    ll num_one=n-num_zero;

    string s = "";

    ll zero_pairs=k/2;
    ll one_pairs=k-zero_pairs;

    for (ll i=0;i<zero_pairs+1;i++) {
        s+='0';
        num_zero--;
    }
     for (ll i=0;i<one_pairs+1;i++) {
        s += '1';
        num_one--;
    }

    while (num_zero > 0 || num_one > 0) {
        if (s.back()=='1') {
            if (num_zero>0) { s += '0'; num_zero--; }
            else { s += '1'; num_one--; }
        } else {
            if (num_one>0) { s += '1'; num_one--; }
            else { s += '0'; num_zero--; }
        }
    }
    cout<<s<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        abcd();
    }
    return 0;
}