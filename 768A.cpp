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

    if(n<3){
        cout<<0<<endl;
        return;
    }

    ll mx=*max_element(v.begin(),v.end());
    ll mn=*min_element(v.begin(),v.end());

    ll count=0;
    for(ll i=0;i<n;i++)  if(v[i]>mn&& v[i]<mx) count++;
    
    cout<<count<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    
        abcd();
    
}