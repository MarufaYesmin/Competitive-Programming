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
    vector<ll> v1(n),v2(n);

    for(auto &a:v1) cin>>a;
    for(auto &a:v2) cin>>a;

    ll less_element=0,idx=-1,st=0;

    for(ll i=0;i<n;i++){
        if(v1[i]<v2[i]){
             less_element++;
             idx=i;
             st=v2[i]-v1[i];
        }
    }

    if(less_element>1) no;
    else if(less_element==0) yes;
    else{
        for(ll i=0;i<n;i++){
            if(i==idx) continue;
            v1[i] -= st;
            if(v1[i]<v2[i]) { no; return; }
        } yes;
    }
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