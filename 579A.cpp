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

int CountSetBit(ll x){
    ll count=0;
    while(x){
        x = x & (x-1) ;  // prottekbar right-most set bit remove hobe until it turn into 0
        count++; //set bit prottekbar count korbe
    }
    return count;
}
void abcd(){
    ll n; cin>>n;
    cout<<CountSetBit(n)<<endl;  
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}