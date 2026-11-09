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
    ll n,m; cin>>n>>m;
    vector<ll> a(n),b(m),pre(n+1,0);
    for(ll i=1;i<=n;i++){
        cin>>a[i-1];
        pre[i]=pre[i-1]+a[i-1];
    }
    for(auto &q:b) cin>>q; sort(all(b));

    ll ans=0,prev=0;
    for(ll i = 0; i < m; i++){
        ll current=pre[b[i]]-pre[prev];
        ans+=abs(current);
        prev=b[i];
    }
    if(prev<n) ans+=(pre[n]-pre[prev]);
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        abcd();
    }
    return 0;
}