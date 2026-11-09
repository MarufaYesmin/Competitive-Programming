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

    sort(all(v));

    ll odd=0,even=0,diff_one=0;

    v[0]%2==0? even++:odd++;
    for(ll i=1;i<n;i++){
        v[i]%2==0? even++:odd++;

        if(v[i]-v[i-1]==1) diff_one++;
    }

    ll need_diff=(n/2)-(even/2 + odd/2);

    need_diff<=diff_one? yes:no;
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