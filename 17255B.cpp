
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
    ll N,D; cin>>N>>D;
    vector<ll> v(N);
    for(auto &a:v) cin>>a;

    sort(v.rbegin(),v.rend());

    ll count=0;
    for(ll i=0,r=N-1;i<=r;i++){
        ll x=(D+v[i])/v[i];

        if(x<=(r-i+1)){
            count++;
            r-=x-1;
        }
        else break;
    }

    cout<<count<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    abcd();
}
