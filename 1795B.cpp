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
    ll n, k; 
    cin >> n >> k;

    bool has_l_k = false; 
    bool has_r_k = false; 

    while(n--){
        ll l, r; 
        cin >> l >> r;

        if (l == k) has_l_k = true;
        if (r == k) has_r_k = true;
    }

    if (has_l_k && has_r_k) {
        yes;
    } else {
        no;
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
}