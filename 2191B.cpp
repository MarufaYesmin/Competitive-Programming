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
    ll arr[n];

    ll count0=0,count1=0;

    for(ll i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0) count0++;
        else if(arr[i]==1) count1++;
    } 

    if(count0 && count1) yes;
    else if(!count1 && count0==1) yes;
    else no;
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