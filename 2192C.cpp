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
    ll n,h,k;
    cin>>n>>h>>k;

    vector<ll> v(n);
    ll total=0;
    for(auto &a:v){
        cin>>a;
        total+=a;
    }

    ll r=(h-1)/total;
    ll rem=h-r*total;
    if(rem==0) rem=total;

    vector<ll> pre(n+1,0);
    for(ll i=1;i<=n;i++){
        pre[i]=pre[i-1]+v[i-1];
    }

    vector<ll> prefmin(n+1,LLONG_MAX);
    for(ll i=1;i<=n;i++){
        prefmin[i]=min(prefmin[i-1],v[i-1]);
    }

    vector<ll> sufmax(n+2,LLONG_MIN);
    for(ll i=n;i>=1;i--){
        sufmax[i]=max(sufmax[i+1],v[i-1]);
    }

    ll cnt=-1;

    for(ll i=1;i<=n;i++){
        ll cur=pre[i];

        if(i<n){
            cur=max(cur, pre[i] - prefmin[i] + sufmax[i+1]);
        }

        if(cur>=rem){
            cnt=r*(n+k)+i;
            break;
        }
    }

    cout<<cnt<<endl;
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