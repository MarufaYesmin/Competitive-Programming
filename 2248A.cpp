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
    string s; cin>>s;

    ll is0=0,is1=0;

    for(ll i=0;i<s.length();i++){
        if(s[i]=='1' && is1==0){
            is1=1;
            continue;
        }
        if(s[i]=='0' && is0==0){
            is0=1;
            continue;
        }
        cout<<s[i];
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