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
    string word; cin>>word;
    unordered_map<char,ll> mp;
    for(ll i=0;i<s.length();i++){
        mp[s[i]]=i;
    }

    ll count=0;
    for(ll i=1;i<word.size();i++){
        count += abs(mp[word[i]]-mp[word[i-1]]);
    }
    cout<<count<<endl;
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