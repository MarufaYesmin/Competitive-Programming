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

const ll MOD = 998244353;

void abcd(){
    ll n,k,sum=0; cin>>n>>k;
    vector<ll> v(n);
    for(auto &a:v) cin>>a;

    for(ll i=n;i>=n-k+1;i--) sum+=i;

    ll current_max=n;
    vector<ll> x;
    for(ll i=0;i<n;i++){
        if(v[i]>=(n-k+1)){
            x.push_back(i);
        }
    }
    ll ways=1;
    for(ll i=1;i<x.size();i++){
        ways = (ways * (x[i] - x[i-1])) % MOD;
    }
    cout<<sum<<' '<<ways<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}