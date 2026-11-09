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
    string s; cin>>s;
    ll zero=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='0') zero++;
    }

    if(n%2==1 && zero%2==1 && zero>1) cout<<"ALICE\n";
    else cout<<"BOB\n";
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