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
    vector<pair<ll,ll>> m(n);
    for(ll i=0;i<n;i++){
        ll x; cin>>x;
        m[i]={x-i,i};
    }
    sort(m.begin(),m.end(),greater<pair<ll,ll>>());

    ll count=1,ans=0;
    for(ll i=0;i<n-1;i++){
        if(m[i].first==m[i+1].first){
            count++;
        }
        else{
            ans += (count*(count-1))/2;
            count=1;
        }
    }
    ans += (count*(count-1))/2;
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