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
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        ll x; cin>>x;
        v[i] = ( i%2==0? x:-x );
    }
    
    vector<ll> pre(n+1,0);
    for(ll i=1;i<=n;i++){
        pre[i]=pre[i-1]+v[i-1];
    }

    sort(all(pre)); //O(nlogn)

    for(ll i=0;i<=n;i++){ //O(n)
        if(pre[i]==pre[i-1]){
            yes; return;
        }
    }
    no;

    //tahole overall - O(nlogn)
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