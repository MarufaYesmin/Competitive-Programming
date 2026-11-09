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
   ll n,count=0; cin>>n;
   vector<ll> v(n),rslt;
   for(auto &a:v) cin>>a;

   if(v[n-1]>0){
    count=1;
    rslt.push_back(n);
   }

   for(ll i=n-2;i>=0;i--){
      if( (count%2 == 1 && v[i] < 0) || (count%2 == 0 && v[i]>0) ){
         count++;
         rslt.push_back(i+1);
      } 
   }
   cout<<count<<endl;
   for(ll i=0;i<rslt.size();i++){
        cout<<rslt[i]<< ' ';
   }
   cout<<endl;
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