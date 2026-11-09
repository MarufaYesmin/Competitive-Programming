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

void func(ll st,ll end){
    for(ll i=st;i<=end;i++) cout<<i<<' ';
}

void abcd(){
    ll n; cin>>n;

    func(1,n);
    func(1,n);
    func(2,n);
    cout<<1<<' ';
    func(1,n);
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