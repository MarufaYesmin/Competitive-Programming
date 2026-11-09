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
    ll n,q; cin>>n>>q;
    vector<ll> v(n);
    vector<ll> pre(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(i==0) pre[i] = v[i];
        else pre[i] = pre[i-1] + v[i];
    }
    while(q--){
        ll l,r,k; cin>>l>>r>>k;

        ll left = (l == 1 ? 0 : pre[l-2]);
        ll right = pre[n-1] - pre[r-1];

        ll x = left + (r - l + 1) * k + right;
        
        (x&1)==1? yes:no;
    }

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