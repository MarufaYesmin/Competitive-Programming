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
    string n; cin>>n;

    ll count=0;
    string s="314159265358979323846264338327";
    for(ll i=0;i<n.length();i++){
        if(n[i]!=s[i]){
            break;
        }
        count++;
    }
    cout<<count<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    ll t; cin>>t;

    while(t--){
        abcd();
    }
}