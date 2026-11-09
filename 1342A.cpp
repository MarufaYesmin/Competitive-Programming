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
    ll x,y;
    cin>>x>>y;

    ll a,b;
    cin>>a>>b;

    ll mn=min(x,y);
    ll ans=mn*min(b,2*a);

    x-=mn; y-=mn;
    ans+=(x+y)*a;

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