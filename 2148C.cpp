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
    ll n,m,ans=0; cin>>n>>m;

    ll current_position=0;
    ll current_time=0;    

    while(n--){
        ll x,y; cin>>x>>y;

        ll d = y-current_position;
        ll t = x-current_time;

        if((t-d)%2==0) ans+=t;
        else ans += (t-1) ;

        current_time=x;
        current_position=y;
    }
    
    ans+=(m-current_time);

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