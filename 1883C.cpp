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
    ll n,k,even=0; cin>>n>>k;
    vector<ll> v(n);
    for(auto &a:v){
        cin>>a;
        if(a%2==0) even++;
    } 

    ll mn=LLONG_MAX;

    for(ll i=0;i<n;i++){
       ll x=0;

       if(v[i]>k){
        while((v[i]+x)%k != 0) x++;
       }
       else x=k-v[i];

       mn=min(mn,x);
    }

    if(k==4){
        if(even>=2) mn=0;
        if(even==1) mn=min(mn,1LL);
        else mn=min(mn,2LL);
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