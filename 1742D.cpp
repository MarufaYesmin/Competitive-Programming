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
    vector<ll> v(n);
    for(auto &a:v) cin>>a;

    ll mx=LLONG_MIN;
    for(ll i=n-1;i>=0;i--){
        for(ll j=i;j>=0;j--){
            if(__gcd(v[i],v[j])==1){
                mx=max(mx,i+j+2);
            }
        }
    }
    if(mx != LLONG_MIN) cout<<mx<<endl;
    else cout<<-1<<endl;
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