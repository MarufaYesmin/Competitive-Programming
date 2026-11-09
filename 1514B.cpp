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

int FindPowMod(ll a,ll b,ll mod){
    if(b==0) return 1;
    if(b==1) return a;

    ll x = FindPowMod(a,b/2,mod)%mod; //recursive call
    ll ans=0;

    if(b%2==1){
        ans = (x%mod * x%mod) % mod;
        ans = (ans%mod * a%mod) % mod;
    }
    else{
        ans = (x%mod * x%mod) % mod ;
    }
    return ans;
}

void abcd(){
    ll n,k; cin>>n>>k;
    cout<<FindPowMod(n,k,1000000007)<<endl;
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