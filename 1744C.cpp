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
   char c; cin>>c;
   string s; cin>>s;

   if(c=='g'){
    cout<<0<<endl;
    return;
   }
   
   s+=s; bool ok=false; ll inx_of_c=0,ans=0;
   for(ll i=0;i<2*n;i++){
    if(s[i]==c && ok==false){
        inx_of_c=i;
        ok=true;
    }
    else if(s[i]=='g' && ok==true){
        ok=false;
        ans=max(ans,i-inx_of_c);
    }
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