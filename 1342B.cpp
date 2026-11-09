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
    string t;  cin>>t;

    ll numZero=0,numOne=0;

    ll n=t.length();

    for(ll i=0;i<n;i++){
        if(t[i]=='1') numOne++;
        else numZero++;
    }

    if(numOne==n || numZero==n){
        cout<<t<<endl;
        return;
    }

    string ans="";
    for(ll i=0;i<2*n;i++){
        if(i%2==0) ans+='1';
        else ans+='0';
    }

    cout<<ans<<endl;
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