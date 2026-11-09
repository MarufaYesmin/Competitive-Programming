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
    ll n;
    cin>>n;

    vector<ll> v(n);
    for(auto &a:v) cin>>a;

    ll y=1;
    for(ll i=0;i<n;i++){
        if(v[i]<y){
            no;
            return;
        }
        ll x=v[i]-y;
        if(i<n-1)
            v[i+1]+=x;

        y++;
    }
    yes;
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