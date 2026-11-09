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
   unordered_map<ll,ll> mp;
   for(int i=0;i<n;i++) {
    ll h,m; cin>>h>>m;
    mp[h*60+m]++;
   }

   ll highest=0;
   for(auto &a:mp){
    highest=max(highest,a.second);
   }

   cout<<highest<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
   abcd();
}