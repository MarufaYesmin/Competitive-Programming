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
   string s,t; cin>>s>>t;
   
   if(t=="a"){
    cout<<1<<endl;
    return;
   }

   if(t.find('a') != string::npos){
        cout<<-1<<endl;
        return;
   }

   ll n=s.length();
   ll ans=(1LL<<n);
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