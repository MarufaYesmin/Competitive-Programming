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

bool IsPrime(ll x){
    if(x==0 || x==1) return false;
    for(ll i=2;i*i<=x;i++){
        if(x%i==0) return false;
    }
    return true;
}
void abcd(){
    ll n;
    cin>>n;

    if(IsPrime(n-2)) cout<<2<<' '<<(n-2)<<endl;
    else cout<<"-1\n";
}    
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}