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
    ll n,x,y,z; cin>>n>>x>>y>>z;

    ll withoutAi=(n+x+y-1)/(x+y);
    ll withAi;

    if(n <= x*z){
       withAi=(n+x-1)/x;
    }
    else{
        ll p=n-(z*x);
        ll q=x+(10*y);
        withAi=z+(p+q-1)/q;
    }

   cout<<min(withAi,withoutAi)<<endl;;
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