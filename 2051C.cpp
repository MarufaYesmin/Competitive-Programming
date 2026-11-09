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
    ll n,m,k,sum_q=0; cin>>n>>m>>k;
    vector<ll> a(m);
    for(auto &p:a) cin>>p;
    vector<ll> q(k);
    for(auto &a:q){
        cin>>a;
        sum_q+=a;
    } 

    if(k<n-1){
        for(ll i=0;i<m;i++) cout<<0;
        cout<<endl;
        return;
    }
    if(k==n){
        for(ll i=0;i<m;i++) cout<<1;
        cout<<endl;
        return;
    }

    ll total_sum=n*(n+1)/2;
    ll missing=total_sum-sum_q;

    for(ll i=0;i<m;i++){
        if(a[i]==missing) cout<<'1';
        else cout<<'0';
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