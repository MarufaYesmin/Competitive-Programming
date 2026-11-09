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
   ll n ; cin>>n;
   vector<ll> v1(n) ,v2(n);
   for(auto &a:v1) cin>>a;
   for(auto &a:v2) cin>>a;

   for(ll i=0;i<n;i++){
        if(v1[i]>v2[i]) swap(v1[i],v2[i]);
   }

   ll sum=0;
   for(auto &a:v2) sum+=a;

    ll mx=*max_element(v1.begin(),v1.end());

   cout<< mx+sum<<endl;

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