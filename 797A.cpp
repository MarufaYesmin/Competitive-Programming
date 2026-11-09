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

    vector<ll> factors;
    for(ll i = 2; i * i <= n; i++){
        if(n % i == 0){
            while(n % i == 0){
                factors.push_back(i);
                n /= i;
            }
        }
    }

    if(n > 1) factors.push_back(n);

    ll sz = factors.size();

    if(sz < k){
        cout << -1 << endl;
    }
    else{
        for(int i = 0; i < k - 1; i++){
            cout << factors[i] << " ";
        }

        ll x = 1;
        for(int i = k - 1; i < sz; i++){
            x *= factors[i];
        }
        cout << x << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    abcd();
}