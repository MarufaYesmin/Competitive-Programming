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
    ll n,k,x; cin>>n>>k;
    map<ll,ll> m;
    for(ll i=0;i<n;i++){
       cin>>x;
       m[x]++;
    }
    ll count1=0,count2=0;
    count1=m[k];
    for(ll i=0;i<k;i++){
        if(m[i]==0) count2++;
    }
    ll ans=max(count1,count2);
    cout<<ans<<'\n';
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