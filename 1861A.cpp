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
   ll x; cin>>x;

   ll ans=0,pow=1;
   while(x){
    ll rem=x%10;
    if(rem==3){
        cout<<"73\n"; break;
    }
    if(rem==7){
        cout<<"37\n"; break;
    }
    x/=10;
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