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

    vector<ll> v(26,0);
for(char i : s) v[i - 'a']++;
    ll mn=0,mx=0;

    for(ll i=1;i<n;i++){
        if(v[s[i]-'a']<v[s[mn]-'a']){
           mn=i;
        } 
        if(v[s[i]-'a']>v[s[mx]-'a']){
           mx=i;
        } 
    }
    if (mn == mx) {
    for (int i = 1; i < n; i++) {
        if (s[i] != s[0]) {
            mn = i;
            mx = 0;
            break;
        }
     }
    }
    s[mn] = s[mx];

    cout<<s<<endl;
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