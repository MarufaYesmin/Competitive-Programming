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
    ll len=(n*(n-1))/2;
    vector<ll> v(len);
    for(ll i=0;i<len;i++) cin>>v[i];

    vector<ll> ans(n);

    sort(v.begin(),v.end());

    ll j=0;
    for(ll i=0;i<len;){
        ans[j]=v[i];
        j++;
        i+=(n-j);
    }
    ans[n-1]=v[len-1];
    for(auto &a:ans) cout<<a<<' ';
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