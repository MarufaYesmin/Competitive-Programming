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

    for(char ch='a';ch<='h';ch++){
        if(ch==s[0]) continue;
        cout<<ch<<s[1]<<endl;
    }

    for(ll i=1;i<=8;i++){
        if(i==s[1]-'0') continue;
        cout<<s[0]<<i<<endl;
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    ll n; cin>>n;
    while(n--){
        abcd();
    }
}