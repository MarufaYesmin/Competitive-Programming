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

bool ok(vector<ll> v1,vector<ll> v2,ll m,ll q){
    ll need=0;

    for(ll i=0;i<v1.size();i++){
        ll required=m*v1[i];

        if(required>v2[i]) need += (required-v2[i]);

        if(need>q) return false;
    }
    return true;
}
void abcd(){
    ll n,k; cin>>n>>k;
    vector<ll> a(n);
    vector<ll> b(n);
    for(auto &x:a) cin>>x;
    for(auto &x:b) cin>>x;

    ll st=0,end=3000;
    while(st<=end){
        ll mid=(st+end)/2;

        if(ok(a,b,mid,k)){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    cout<<end<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}