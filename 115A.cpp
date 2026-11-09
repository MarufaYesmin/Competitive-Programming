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

    ll ans=0;
    for(ll i=1;i<=n;i++){
        ll depth=0;
        ll curr=i;

        while(curr != -1){
            curr=v[curr];
            depth++;
        }

        ans=max(ans,depth);
    }
    cout<<ans<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}