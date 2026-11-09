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
    ll n,count=0; cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>> v[i];

    for(int i=n-2;i>=0;i--){
        if(v[i+1]>0) v[i]+=v[i+1];
    }

    for(ll i:v){
        if(i>0) count++;
    }

    cout<<count<<endl;;
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