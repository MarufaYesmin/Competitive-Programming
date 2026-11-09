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
ll dp[15];

ll fib(ll n){
    if(n==0 || n==1)  return n+1;

    if(dp[n] != -1) return dp[n];

    return dp[n] = fib(n-1)+fib(n-2);
}

void abcd(){
    ll n,m; cin>>n>>m;

    ll x=fib(n);
    ll y=fib(n-1);

    while(m--){
        vector<ll> side(3);
        for(auto &a:side) cin>>a;

        sort(all(side));

        if(side[0] >= y && side[1] >= y && side[2] >= x) cout<<1;
        else cout<<0;
    }
    cout<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    memset(dp,-1,sizeof(dp));
    ll t;
    cin>>t;
    while(t--){
        abcd();
    }
}

