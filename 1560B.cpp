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

void abcd()
{
    ll a,b,c; cin>>a>>b>>c;

    ll x=abs(a-b);
    ll n=2*x;

    if(a>n || b>n || c>n)
    {
        cout<<-1<<endl;
        return;
    }

    ll ans=c+x;

    if(ans>n)
        ans=c-x;

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