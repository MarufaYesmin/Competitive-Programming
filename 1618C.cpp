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
   vector<ll> v(n);
   for(auto &a:v) cin>>a;

   ll gcd_even=v[0],gcd_odd=v[1];
   for(ll i=2;i<n;i++){
    if(i%2==0) gcd_even=__gcd(v[i],gcd_even);
    else gcd_odd=__gcd(v[i],gcd_odd);
   }
   
   bool ok_even=true;
   for(ll i=0;i<n;i+=2){
    if(v[i]%gcd_odd==0){
        ok_even=false;
        break;
    }
   }

   bool ok_odd=true;
   for(ll i=1;i<n;i+=2){
    if(v[i]%gcd_even==0){
        ok_odd=false;
        break;
    }
   }

   if(ok_even) cout<<gcd_odd<<endl;
   else if(ok_odd) cout<<gcd_even<<endl;
   else cout<<0<<endl;
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