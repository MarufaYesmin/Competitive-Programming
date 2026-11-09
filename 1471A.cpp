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
    ll n,x; cin>>n>>x;
    vector<ll> v(n);
    for(auto &a:v) cin>>a;

    ll sum=0;
    ll mx=0;
    for(ll i=0;i<n; i++){
        sum += v[i] ;

        mx += (v[i]+x-1)/x;
    }

    cout<<(sum+x-1)/x<<' '<<mx<<endl;
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