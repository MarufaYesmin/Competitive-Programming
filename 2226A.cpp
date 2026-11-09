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
    for(ll i=0;i<n;i++) cin>>arr[i];

    ll sum=0;
    for(ll i=0;i<n;i++){
        if(arr[i]==1){
            if(i==(n-1)) sum=(sum+arr[i])%676767677;
            else continue;
        }
        else sum=(sum+arr[i])%676767677;
    }
    cout<<sum<<endl;
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