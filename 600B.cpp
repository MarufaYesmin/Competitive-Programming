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
   ll n,m; cin>>n>>m;
   vector<ll> a(n) ;
   for(ll i=0;i<n;i++) cin>>a[i];
   
   vector<ll> b(m);
   for(auto &x:b) cin>>x;

   sort(all(a));

   for(ll i=0;i<m;i++){
        ll ans=upper_bound(a.begin(),a.end(),b[i])-a.begin();
        cout<<ans<<' ';
   }
   cout<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}