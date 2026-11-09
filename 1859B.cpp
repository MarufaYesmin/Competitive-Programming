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
    ll n; cin>>n;

    vector<ll> min,second_min;
    while(n--){
        ll m; cin>>m; ll first=LLONG_MAX,second=LLONG_MAX;
        for(ll i=0;i<m;i++){
            ll x; cin>>x;
            if(x<first){
                second=first;
                first=x;
            }
            else if(x<second){
                second=x;
            }
        }
        min.push_back(first);
        second_min.push_back(second);
    }
    ll ans=0;
    for(auto &a:second_min){
        ans+=a;
    }

    ans -= *min_element(second_min.begin(),second_min.end());
    ans += *min_element(min.begin(),min.end());

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