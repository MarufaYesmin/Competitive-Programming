// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// using pll = pair<ll,ll>;
// using vll = vector<ll>;
// using sll = set<ll>;
// #define all(u) (u).begin(),(u).end()
// #define yes cout<<"YES"<<endl
// #define no cout<<"NO"<<endl
// #define endl "\n"
// ll rec(ll n,ll a,ll b,ll c,vector<ll>&dp){
//   if(n==0){
//     return 0;
//   } 
//   if(n<0) return LONG_LONG_MIN;

//   if(dp[n] != -1) return dp[n];

//   ll piece1 = rec(n-a,a,b,c,dp);
//   ll piece2 = rec(n-b,a,b,c,dp);
//   ll piece3 = rec(n-c,a,b,c,dp);

//   return dp[n] = 1+max({piece1,piece2,piece3});
// }
// void abcd(){
//     ll n,a,b,c; cin>>n>>a>>b>>c;
   
//     vector<ll> dp(n+1,-1);

//     cout<<rec(n,a,b,c,dp)<<endl;
// }
// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
//    abcd();
// }


// bottom up approch

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
    ll n,a,b,c; cin>>n>>a>>b>>c;

    vector<ll> dp(n+1,-1e9);
    dp[0]=0;

    for(ll i=1;i<=n;i++){
      if(i-a>=0) dp[i]=max(dp[i],dp[i-a]+1);
      if(i-b>=0) dp[i]=max(dp[i],dp[i-b]+1);
      if(i-c>=0)  dp[i]=max(dp[i],dp[i-c]+1);
    }
    cout<<dp[n];
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}