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
   ll n,x,k; cin>>n>>x>>k;
   string s; cin>>s;

   ll i=0;
   bool found=false;
   for(;i<n;i++){
    if(s[i]=='L') x--;
    else x++;

    if(x==0) {
        found=true;
        break;
    }
   }

   if(!found || i+1>k){
    cout<<"0\n";
    return;
   }

   k-=(i+1);
   ll pos=0,cnt=1,cycle=0;

   for(ll i=0;i<n;i++){
    if(s[i]=='L') pos--;
    else pos ++;
    
    if(pos==0){
        cycle = i+1;
        break;
     }
    }
    cycle==0 ?   cout<<cnt<<endl : cout<<cnt+(k/cycle)<<endl;
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