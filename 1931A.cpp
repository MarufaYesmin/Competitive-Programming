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
   
   string mn="zzz";
   for(ll i=0;i<26;i++){
      for(ll j=0;j<26;j++){
        for(ll k=0;k<26;k++){
            if(i+j+k+3==n){
                string s="";
                s += 'a'+i ;
                s += 'a'+j ;
                s += 'a'+k ;

                if(s<mn) mn=s;
            }
        }
      }
   }
   cout<<mn<<endl;
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