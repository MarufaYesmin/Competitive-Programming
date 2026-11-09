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

ll calculate(ll d){
    ll pow=1;
    for(ll i=1;;i++){
        if(pow>d){
            return i-1;
        }
        pow*=2;
    }
}

void abcd(){
    ll n; cin>>n;
    vector<ll> v(n); for(auto &a:v) cin>>a;
    ll diff=0;
    ll max_dif=LLONG_MIN;
    for(ll i=0;i<n;i++){
        if(v[i]<max_dif){
            ll x=max_dif-v[i];
            diff=max(diff,x);
        }
        else{
            max_dif=max(max_dif,v[i]);
        }
    }
    cout<<calculate(diff)<<endl;
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