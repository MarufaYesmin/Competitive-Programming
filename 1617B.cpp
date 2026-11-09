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
  ll n; cin>>n;
  
    if(n%2==0) cout<<n-3<<' '<<2<<' '<<1<<endl;
    else{
        
        ll a=3;
        while(1){
            ll x=n-1-a;
             if(__gcd(a,x)==1) {
            cout<<a<<' '<<x<<' '<<1<<endl;
            return;
        }
        a+=2;
        }
       
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