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
   ll n,m;  cin>>n>>m;

   if(n>=31) cout<<m<<endl;
   else cout<<m%(1<<n)<<endl;   // (a<<n) means a*2^n  therefore 1<<n->1*2^n
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}