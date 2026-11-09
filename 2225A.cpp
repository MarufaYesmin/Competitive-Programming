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
   ll x,y;
   cin>>x>>y;
   
   ll i=2;
   bool ok=false;
   while((x*i)<y){
    if((x*i)%y!=0){
        ok=true;
        break;
    }
   }
   if(ok) yes;
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