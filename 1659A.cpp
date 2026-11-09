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
    ll n,r,b;
     cin>>n>>r>>b;

     string s="";

     ll x=r/(b+1);
     ll extra=r%(b+1);

     for(int i=0;i<=b;i++){
        for(ll j=0;j<x;j++) s+='R';

        if(extra>0){
            s+='R';
            extra--;
        }

        if(i!=b){
            s+='B';
        }
     }
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