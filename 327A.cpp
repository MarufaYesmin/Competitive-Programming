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
    ll n; cin>>n;
    vector<ll> v(n),x(n);
    for(auto &a:v) cin>>a;

    ll sum=0,mx=LLONG_MIN;
    for(ll i=0;i<n;i++){
       for(ll j=i;j<n;j++){
        x=v;
        for(ll k=i;k<=j;k++) x[k]=1-x[k];
        sum=0;
        for(ll k=0;k<n;k++) sum+=x[k];

        mx=max(mx,sum);
       }
    }
    cout<<mx<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}