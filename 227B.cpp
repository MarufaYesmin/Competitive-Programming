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
   vector<ll> v(n) ;
   for(auto &a:v) cin>>a;

   ll m; cin>>m;
   vector<ll> que(m);
   for(auto &a:que) cin>>a;

   ll vasya=0,petya=0;
   vector<ll> vis(n+1,0),pet(n+1,0);

   for(ll i=0;i<n;i++){
    vis[v[i]]=i+1;
    pet[v[i]]=n-i;
   }

   for(ll i=0;i<m;i++){
    vasya += vis[que[i]];
    petya += pet[que[i]];
   }

   cout<<vasya<<' '<<petya<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}