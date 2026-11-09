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

void abcd() {
   ll n,ans=1;cin>>n;
   vector<ll> v(n);

   for(auto &a:v) cin>>a;

   auto max_idx=max_element(v.begin(),v.end());
   ll max=max_element(v.begin(),v.end())-v.begin();

   while(max!=0){
    ll max=max_element(v.begin(),max_idx)-v.begin();
    auto max_idx=&max;
    ans++;
   }
   cout<<ans<<endl;
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