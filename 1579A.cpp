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
    ll num_A=0,num_B=0,num_C=0;
    for(ll i=0;i<s.length();i++){
        if(s[i]=='A') num_A++;
        else if(s[i]=='B') num_B++;
        else num_C++;
    }
    if(num_B>=num_A){
        num_B -= num_A;
        if(num_B==num_C){
            yes;
        }
        else{
            no;
        }
    }
    else{
        no;
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