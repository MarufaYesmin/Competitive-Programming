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

ll calc(ll x,ll y){
    if(x>y) return 1;
    else if(y>x) return -1;
    else return 0;
}

void abcd(){
    ll a1, a2, b1, b2; cin >> a1 >> a2 >> b1 >> b2;

    ll wins = 0;

    if(calc(a1, b1) + calc(a2, b2) > 0) wins++; 
    if(calc(a1, b2) + calc(a2, b1) > 0) wins++; 
    if(calc(a2, b1) + calc(a1, b2) > 0) wins++; 
    if(calc(a2, b2) + calc(a1, b1) > 0) wins++; 

    cout << wins << endl;
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