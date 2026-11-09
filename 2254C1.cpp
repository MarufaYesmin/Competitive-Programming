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
    string a,b; cin>>a>>b;
    
    ll evenInA=0,evenInB=0,OddInA=0,OddInB=0;

    for(ll i=0;i<n;i++){
        if(a[i]=='1'){
            if(i%2==0) evenInA++;
            else OddInA++;
        }   
    }
    for(ll i=0;i<n;i++){
        if(b[i]=='1'){
            if(i%2==0) evenInB++;
            else OddInB++;
        }   
    }

    if(evenInA==evenInB && OddInA==OddInB) yes;
    else  no;
    
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