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

    sort(v.rbegin(),v.rend());

    vector<ll> ans(n);

    int j=0;
    for(ll i=1;i<n;i+=2){
        ans[i]=v[j];
        j++;
    }

    for(ll i=0;i<n;i+=2){
        ans[i]=v[j];
        j++;
    }

    for(auto &a:ans){
        cout<<a<<' ';
    }
    cout<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}