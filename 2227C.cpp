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

    vector<ll> v(n);
    for(auto &x : v) cin >> x;

    vector<ll> a, b, c, d;

    for(ll x : v){
        if(x % 6 == 0) a.push_back(x);    
        else if(x % 2 == 0) b.push_back(x); 
        else if(x % 3 == 0) c.push_back(x); 
        else d.push_back(x);               
    }

    for(ll x : a) cout << x << ' ';
    for(ll x : b) cout << x << ' ';
    for(ll x : d) cout << x << ' ';
    for(ll x : c) cout << x << ' ';

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