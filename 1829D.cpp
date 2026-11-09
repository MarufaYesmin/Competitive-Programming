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
bool calculate(ll n,ll m){
    if(n==m) return true;
    if(n%3!=0) return false;
   
    bool f=calculate(n/3,m);
    bool s=calculate((n/3)*2,m);

    return f || s;
}
void abcd(){
    ll n,m; cin>>n>>m;

    if(calculate(n,m)) yes;
    else no;
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