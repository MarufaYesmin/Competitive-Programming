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
    vector<ll> v(n);
    for(auto &a:v) cin>>a;

    ll m; cin>>m;
    while(m--){
        string s; cin>>s;

        if(s.length()!=n){
            no;
            continue;
        }

        unordered_map<char,ll> mp1;
        unordered_map<ll,char> mp2;

        bool ok=true;

        for(ll i=0;i<n;i++){
            char ch=s[i];
            ll num=v[i];

           if(mp1.count(ch) &&  mp1[ch]!=num){
                ok= false;
                break;
            }

            if(mp2.count(num) && mp2[num]!=ch){
                ok= false;
                break;
            }

            mp1[ch]=num;
            mp2[num]=ch;
        }
        if(ok) yes;
        else no;
    }
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