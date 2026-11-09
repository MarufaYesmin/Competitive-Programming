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
    ll n,m,mx=0; cin>>n>>m;
    vector<ll> v(n);
    for(auto &a:v){
        cin>>a;
        mx=max(mx,a);
    } 
    while(m--){
        char ch; cin>>ch;
        ll l,r; cin>>l>>r;

        if(l<=mx && mx<=r)  ch=='+'? mx++:mx--;
        cout<<mx<<' ';
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