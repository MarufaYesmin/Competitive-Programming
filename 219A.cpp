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
    ll k; cin>>k;
    string s; cin>>s;

    unordered_map<char,ll> mp;
    for(ll i=0;i<s.length();i++){
        mp[s[i]]++;
    }

    string block="";
    ll mx=0;
    for(auto &a:mp){
        if(a.second%k!=0){
            cout<<-1<<endl;
            return;
        }
        ll cnt=a.second/k;
        mx=max(mx,cnt);
        while(cnt--){
            block += a.first;
        }
    }
    
    string ans="";
    for(ll i=0;i<k;i++){
        ans += block;
    }
    cout<<ans<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}