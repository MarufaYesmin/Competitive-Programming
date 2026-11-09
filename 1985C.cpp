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
    vector<ll>  v(n);
    for(auto &a:v) cin>>a;
    ll sum=0,count=0,Max=LONG_MIN;

    for(ll i=0;i<n;i++){
       sum += v[i];
       if(v[i]>Max) Max=v[i];
       if((sum-Max) == Max) count++;
    }
    if(n==1 && v[0]!=0) cout<<0<<endl;
    else cout<<count<<endl;

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