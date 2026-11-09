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
    ll n,x; cin>>n>>x;
    ll num_odd=0,num_even=0;

    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==0) num_even++;
        else num_odd++;
    }

    for(ll i=1;i<=num_odd && i<=x ;i+=2){
        ll need_even=x-i;

        if(num_even>=need_even){
            cout<<"Yes\n";
            return;
        }
    }
    cout<<"No\n";
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