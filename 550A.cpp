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

    ll x=s.find("AB");
    if(x!=-1){
        ll y=s.find("BA",x+2);
        if(y!=-1){
            yes;
            return;
        } 
    }
    x=s.find("BA");
    if(x!=-1){
        ll y=s.find("AB",x+2);
        if(y!=-1){
             yes;
             return;
        }
        
    }
    no;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}