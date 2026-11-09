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

ll isOk(ll height,vector<ll> &vec){
    ll ans=0;
    for(auto &a:vec){
        if(a<height) ans+=height-a;
    }
    return ans;
}

void abcd(){
    ll n,x; cin>>n>>x;
    vector<ll> v(n);
    for(auto &a:v) cin>>a;

    ll high=2e9;
    ll low=1;
    ll result=0;
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(isOk(mid,v)<=x){
            result=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
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