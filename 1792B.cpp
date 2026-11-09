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
   ll a1,a2,a3,a4; cin>>a1>>a2>>a3>>a4;

    if (a1==0) {
    cout<<1<<endl;
    return;
    }
   ll ans=a1;

    ll x=min(a2,a3);
    ans+=2*x;

    ll rem=abs(a2-a3);
    ans+=min(rem,a1);

    a1-=min(rem,a1);

    ans+=min(a4,a1);

    if (a4>a1) ans++;
    
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