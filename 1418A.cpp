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
    ll x,y,k; cin>>x>>y>>k;

    ll need_torches=(y*k)+k-1; //jehetu akta sticks r akta koil lage 

    ll ans=(need_torches+x-1-1)/(x-1); //jehetu amra 1tar binimoye x ta pacchi tarmane gain x-1

    ans+=k;

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