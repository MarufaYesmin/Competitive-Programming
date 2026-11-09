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
    ll k, q; 
    cin >> k >> q;

    vector<ll> v(k);
    for(auto &a : v) cin >> a;

    ll smallest = v[0]; //sorted array->first index minimum
    
    for(ll i = 0; i < q; i++){
        ll x; 
        cin >> x;
        
        if(x < smallest) {
            cout << x << ' ';
        }
        else {
            cout << smallest - 1 << ' ';
        }
    }
    cout << endl;
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