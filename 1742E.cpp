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
    ll n,q; cin>>n>>q;
    vector<ll> pre_sum(n),pre_max(n);

    for(ll i=0;i<n;i++){
        ll x; cin>>x;
        if(i==0){
            pre_sum[i]=x;
            pre_max[i]=x;
        }
        else{
            pre_sum[i]=pre_sum[i-1]+x;
            pre_max[i]=max(x,pre_max[i-1]);
        }
    }

    for(ll i=0;i<q;i++){
        ll y; cin>>y;

        ll idx=upper_bound(pre_max.begin(),pre_max.end(),y)-pre_max.begin();

        if(idx==0){
            cout<<0<<' ';
        }
        else{
            cout<<pre_sum[idx-1]<<' ';
        }
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