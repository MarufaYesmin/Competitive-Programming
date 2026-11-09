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
    string a; cin>>a;
    ll m; cin>>m;
    string b; cin>>b;

    string c; cin>>c;

    deque<char> q(a.begin(),a.end());

    for(ll i=0;i<m;i++){
        if(c[i]=='V') q.push_front(b[i]);
        else q.push_back(b[i]);
    }
    for(auto ch:q) cout<<ch;
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