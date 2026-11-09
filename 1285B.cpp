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
    ll sum=0,cur=0;

    vector<ll> v(n); 

    for(auto &a:v){
        cin>>a;
        sum+=a;
    }
    ll mx1=LLONG_MIN;
    cur = v[0];
    mx1 = v[0];
    for(ll i=1;i<n-1;i++){
        cur = max(v[i], cur + v[i]);
        mx1 = max(mx1, cur);
    }

    ll mx2=LLONG_MIN; 
    cur = v[1];
    mx2 = v[1];
    for(ll i=2;i<n;i++){
        cur = max(v[i], cur + v[i]);
        mx2 = max(mx2, cur);
    }

    max(mx1,mx2)>=sum? no:yes;

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