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

    ll count=1;
    bool Have_01=false;
    for(ll i=1;i<s.length();i++){
        if(s[i]!=s[i-1]) count++;
        if(s[i]=='1' && s[i-1]=='0') Have_01=true;
    }

    if(Have_01) cout<<count-1<<endl;
    else cout<<count<<endl;
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