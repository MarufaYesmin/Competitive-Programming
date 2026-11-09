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

ll calculate(ll b,ll p){
    if(b==0) return 1;

    ll half=calculate(b,p/2);

    if(p%2==0) return half*half;

    return half*half*b;
}

void abcd(){
   ll n; cin>>n;

   if(n==2 || n==4){
    yes;
    return;
   }
   
   for(ll i=2;i<50;i++){
    if(calculate(2,i*i)==n){
        yes;
        return;
    }
    if(calculate(2,i*i)>n) break;
   }

   no;
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