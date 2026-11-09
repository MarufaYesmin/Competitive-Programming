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
    ll m; cin>>m;
    vector<ll> first(m); for(auto &a:first) cin>>a;
    vector<ll> second(m); for(auto &a:second) cin>>a;

    vector<ll> pre(m),suf(m);
    
    pre[0]=first[0];
    suf[0]=second[0];

    for(ll i=1;i<m;i++){
        pre[i]=pre[i-1]+first[i];
        suf[i]=suf[i-1]+second[i];
    }
    ll mn=LLONG_MAX;
    for(ll i=0;i<m;i++){
        ll right_up=pre[m-1]-pre[i];
        ll left_down=(i==0? 0: suf[i-1]);
        mn=min(mn,max(right_up,left_down));
    }
    cout<<mn<<endl;
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