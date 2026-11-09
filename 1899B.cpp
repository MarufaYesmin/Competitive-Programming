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
    vector<ll> v(n);
    for(auto &a:v) cin>>a;

    ll difference=LLONG_MIN;

    for(ll k=1;k<=n;k++){
        if(n%k!=0)  continue;

         ll mx=LLONG_MIN;
         ll mn=LLONG_MAX;

        for(ll i=0;i<n;){
            ll sum=0;
            for(ll j=i;j<i+k;j++){
                sum+=v[j];
            }
            mx=max(mx,sum);
            mn=min(mn,sum);

            i+=k;
        }
        difference=max(difference,mx-mn);
    }
    cout<<difference<<endl;
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