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
    ll n,m; cin>>n>>m;
    vector<string> str(n);
    vector<string> avr(m);
    for(auto &a:str) cin>>a;
    for(auto &a:avr) cin>>a;

    unordered_set<char> s;
    for(ll i=0;i<n;i++){
        s.insert(toupper(str[i][0])); 
    }

    vector<bool> vis(m,false);
    ll count=0;

    while(true){
        bool ok = false;
        for(ll i=0;i<m;i++){
            if(vis[i]) continue;

            bool can_make = true;
            for(char ch : avr[i]){
                if(s.find(ch) == s.end()){
                    can_make = false;
                    break;
                }
            }

            if(can_make){
                vis[i] = true;
                s.insert(avr[i][0]);
                count++;
                ok = true;
            }
        }
        if(!ok) break;
    }

    if(count == m) yes;
    else no;
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