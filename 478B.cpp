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

ll calc_sum(ll p){
    return (p*(p-1))/2;
}

ll calc_min(ll x,ll y){
    ll b=x/y;
    ll rem=x%y;

    return rem*calc_sum(b+1) + (y-rem)*calc_sum(b);
}

ll calc_max(ll x,ll y){
    x=x-y+1;
    return calc_sum(x);
}

void abcd(){
    ll n,m; cin>>n>>m;

    cout<<calc_min(n,m)<<' '<<calc_max(n,m)<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}