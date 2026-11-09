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
    vector<ll> v(n+1);
    for(ll i=1;i<=n;i++) cin>>v[i];

    vector<ll> pre(n+1,0);
    for(ll i=2;i<=n;i++){
        if(v[i]!=v[i-1]){
            pre[i]=i-1;
        }
        else pre[i]=pre[i-1];
    }
    ll m; cin>>m;
    while(m--){
        ll l,r; cin>>l>>r;
        if(pre[r]<l){
            cout<<-1<<' '<<-1<<endl;
        }
        else cout<<pre[r]<<' '<<r<<endl;
    }
    cout<<endl;
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