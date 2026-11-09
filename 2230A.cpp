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
    ll n,a,b,ans=0; 
    cin>>n>>a>>b;

    if(b >= 3*a){
        cout << n*a << endl;
        return;
    }

    ll x = (n/3)*b;
    ll rem = n%3;

    if(rem*a < b) ans = x + rem*a;
    else ans = x + b;

    cout << ans << endl;   
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