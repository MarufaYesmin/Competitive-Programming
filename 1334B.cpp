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
    vector<ll> v(n);
    for(auto &a:v) cin>>a;

    sort(v.rbegin(),v.rend());
    ll sum=0,ans=0;

    for(ll i=0;i<n;i++){
        sum+=v[i];
        if(sum>=m*(i+1)){
            ans++;
        }
        else break;
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