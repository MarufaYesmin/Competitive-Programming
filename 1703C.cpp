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

    vector<pair<ll,string>> b(n);
    for(auto &a:b){
        cin>>a.first>>a.second;
    }
    for(ll i=0;i<n;i++){
        ll change=0,u=0,d=0;
        for(char ch:b[i].second){
            if(ch=='U') u++;
            else d++;
        }
        change=d-u;
        v[i] = ((v[i]+change)%10 + 10)%10;
    }
    for(auto x:v)
    {
        cout<<x<<' ';
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