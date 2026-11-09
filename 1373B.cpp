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

    ll count0=0,count1=0;
    for(ll i=0;i<s.length();i++){
       if(s[i]=='0') count0++;
       else count1++;
    }

    ll total_moves=min(count0,count1);
    
    if(total_moves%2==1) cout<<"DA\n";
    else cout<<"NET\n";
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