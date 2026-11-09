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

bool prime(ll n){
    if(n<2) return false;

    for(ll i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}

void abcd(){
    ll n; cin>>n;

    ll a=n+1;
    while(!prime(a)) a++;

    ll b=a+n;
    while(!prime(b)) b++;

    cout<<a*b<<endl;
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