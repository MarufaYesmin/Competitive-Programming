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

    if(n%2==1){
        for(ll i=n-2;i>0;i-=2) cout<<s[i];
        for(ll i=0;i<n;i+=2) cout<<s[i];
    }
    else{
        for(ll i=n-2;i>=0;i-=2) cout<<s[i];
        for(ll i=1;i<n;i+=2) cout<<s[i];
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    
        abcd();
    
}