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
const ll MOD = 1e9+7;

void abcd(){
    ll n,k; cin>>n>>k;

    ll ans=0,power=1;

    while(k){
        int rem=k%2;
        ans=ans+rem*power;
        power=(power*n)%MOD;
        k/=2;
    }
    cout<<ans%MOD<<endl;
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