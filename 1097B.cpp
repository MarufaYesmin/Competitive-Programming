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

ll n;
vector<ll> v;
ll dp[16][360];

ll calculate(ll i,ll x){ //using dp
    x=(x%360 + 360)%360;
    if(i==n){
        return x==0;
    }
    if(dp[i][x]!=-1) return dp[i][x];

    bool ok1=calculate(i+1,x-v[i]);
    bool ok2=calculate(i+1,x+v[i]);

    return dp[i][x] = (ok1 || ok2);
}

void abcd(){
    memset(dp,-1,sizeof(dp));
    cin>>n;
    v.resize(n);

    for(auto &a:v) cin>>a;

    if(calculate(0,0)) yes;
    else no;

}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}