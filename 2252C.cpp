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

void abcd() {
    ll n,m; cin>>n>>m;

    vector<ll> v(n+1);
    for(ll i=1;i<=n;i++) cin>>v[i];

    vector<vector<ll>> a(n+1,vector<ll>(m));
    for(ll i=1;i<=n;i++){
        for(ll j=0;j<m;j++) cin>>a[i][j];
    }

    ll ans=m;
    vector<ll> x;
    for(ll i=n;i>=1;i--){
        for(ll j=0;j<m;j++) x.push_back(a[i][j]);
        
        sort(x.begin(),x.end(),greater<ll>());

        if(x.size()>m) x.resize(m);

        ll sum=0;
        for(ll k=1;k<ans && k<=x.size();k++){
            sum+=x[k-1];
            if(sum>=v[i]){
                ans=k;
                break;
            }
        }
    }

    cout<<ans<<endl;
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