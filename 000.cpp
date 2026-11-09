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
    while () {
        
        
        ll n2 = n * n;
        ll divisors = 0;

        for (ll i = 1; i * i <= n2; i++) {
            if (n2 % i == 0) {
                divisors++;
                if (i * i != n2) {
                    divisors++;
                }
            }
        }
        
        ll ans = (divisors + 1) / 2;
        
        cout << ans <<endl;
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