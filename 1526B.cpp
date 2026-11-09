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

const ll N = 1100;
ll dp[N];

bool isPosible(int n, vector<ll>& v){
    if(n < 0) return false;
    if(n == 0) return true;

    if(dp[n] != -1) return dp[n];

    for(size_t i = 0; i < v.size(); i++){
       if(isPosible(n - v[i], v)) return dp[n] = 1;
    }

    return dp[n] = 0;
}

void abcd(){
    ll n;  cin >> n;
    
    if(n > 1099){
        yes;
        return;
    }

    vector<ll> posible = {11, 111};

    if(isPosible(n, posible)) yes;
    else no;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(dp, -1, sizeof(dp));

    ll t;
    cin >> t;
    while(t--){
        abcd();
    }
}