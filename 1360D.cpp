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
    ll n,k; cin>>n>>k;


    if(n<=k){
        cout<<1<<endl;
        return;
    }

    ll ans=n;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            if(i<=k) ans=min(ans,n/i);
            if(n/i <= k) ans=min(ans,i);
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