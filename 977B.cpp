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

    map<string,ll> mp;
    for(ll i=0;i<n-1;i++){
        string str="";
        str+=s[i];
        str+=s[i+1];
        mp[str]++;
    }
    string ans="";
    ll max_count=0;
    for(auto val:mp){
       if(max_count<val.second){
        max_count=val.second;
        ans=val.first;
       }

    }
    cout<<ans<<endl;

}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
   abcd();
}