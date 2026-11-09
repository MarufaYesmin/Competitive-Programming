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
    ll n,m,Sx,Sy; cin>>n>>m>>Sx>>Sy;

    cout<<Sx<<' '<<Sy<<endl;
    
    for(ll i=1;i<=n;i++){
        if(i!=Sx) cout<<i<<' '<<Sy<<endl;
    }
    ll dir=0;
    for(ll i=1;i<=m;i++){
        if(i==Sy) continue;

        if(dir==0){
            cout<<n<<' '<<i<<endl;
            for(ll j=n-1;j>=1;j--) cout<<j<<' '<<i<<endl;
            dir=1;
        }
        else{
            cout<<1<<' '<<i<<endl;
            for(ll j=2;j<=n;j++) cout<<j<<' '<<i<<endl;
            dir=0;
        }
    }
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}