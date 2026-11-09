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
    vector<ll> v(2*n+1);
    vector<ll> left(n+1,0),right(n+1,0);
    for(ll i=1;i<=2*n;i++){
        cin>>v[i];
        if(left[v[i]]==0){
            left[v[i]]=i;
        }
        else right[v[i]]=i;
    }

    vector<ll> ans(2*n+1,0);
    ll count=0;
    for(ll i=1;i<=2*n;i++){
        ans[i]=ans[i-1]+1;

        if(right[v[i]]==i){
            ll y=(i-left[v[i]]+1);
            ans[i]=max(ans[i],ans[left[v[i]]-1]+(y*y));
        }
    }
    cout<<ans[2*n]<<endl;
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