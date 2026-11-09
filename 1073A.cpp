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

    for(ll i=0;i<n-1;i++){
        if(s[i]!=s[i+1]){
            yes;
            cout<<s[i]<<s[i+1]<<endl;
            return;
        }
    }
    no;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}