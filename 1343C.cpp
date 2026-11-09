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
    for(auto &a:v) cin>>a;

    ll ans=LLONG_MIN,result=0;
    for(ll i=0;i<n;){
        ans=LLONG_MIN;
       if(v[i]<0){
        while(v[i]<0 && i<n){
            ans=max(ans,v[i]);
            i++;
        }
       }
       else{
        while(v[i]>=0 && i<n){
            ans=max(ans,v[i]);
            i++;
        }
       }
       result+=ans;
    }
    cout<<result<<endl;
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