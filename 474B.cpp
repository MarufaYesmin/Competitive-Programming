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

    vector<ll> prefix_sum(n);

    prefix_sum[0]=v[0];
    for(ll i=1;i<n;i++){
        prefix_sum[i]=v[i]+prefix_sum[i-1];
    }

    ll m,x; cin>>m;
    for(ll i=0;i<m;i++){
        cin>>x;
        ll lb=lower_bound(prefix_sum.begin(),prefix_sum.end(),x) - prefix_sum.begin();
        cout<<lb+1<<endl;
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}