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
    ll n,sum=0; cin>>n;

    vector<ll> v;
    for(ll i=1;i<=n;i++){
        ll x; cin>>x;
        if(x<i){
            sum += lower_bound(v.begin(),v.end(),x)-v.begin();
            v.push_back(i);
        }
    }
    cout<<sum<<endl;
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