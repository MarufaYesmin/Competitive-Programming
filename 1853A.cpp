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

ll IsSorted(ll arr[],ll n){
    for(ll i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]) return false;
    }
    return true;
}

void abcd(){
   ll n; cin>>n;
   ll a[n] ;
   for(ll i=0;i<n;i++) cin>>a[i];

   if(!IsSorted(a,n)) cout<<0<<endl;
   else{
    ll min_differ=LLONG_MAX;
    for(ll i=0;i<n-1;i++){
        min_differ = min(min_differ,a[i+1]-a[i]);
    }
    cout<<((min_differ)/2)+1<<endl;
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