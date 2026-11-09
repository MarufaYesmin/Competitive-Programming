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
    ll n,h,m;
    cin>>n>>h>>m;

    ll cur = h*60+m;
    ll ans = 1440;

    for(ll i = 0; i < n; i++){
        ll hh, mm;
        cin >> hh >> mm;

        ll alarm = hh*60+mm;
        ll diff = (alarm-cur+1440)%1440;

        ans = min(ans,diff);
    }
    cout<<ans/60<<' '<<ans%60<<endl;
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