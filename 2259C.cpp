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

    ll first=-1,last=-1;

    for(ll i=0;i<n;i++){
        if(v[i]==1){
            break;
        }
        if(v[i]==-1){
            first=i;
            break;
        }
    }
    for(ll i=n-1;i>=0;i--){
        if(v[i]==1){
            break;
        }
        if(v[i]==-1){
            last=i;
            break;
        }
    }

   for(ll i=0;i<n;i++){
    if(v[i]==-1){
        if(i==first || i==last){
        cout<<1<<' ';
        }
       else cout<<0<<' ';
    }
    else cout<<v[i]<<' ';
   }
    cout<<endl;
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