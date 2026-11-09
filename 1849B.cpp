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

void abcd() {
    ll n, k;
    cin >> n >> k;

    vector<pair<ll,ll>> v;

    for (ll i = 1; i <= n; i++) {
        ll x;
        cin >> x;

        ll rem = x % k;
        if (rem == 0) rem = k;

        v.push_back({rem,i});
    }

    sort(v.begin(),v.end(),[](auto a,auto b){
        if(a.first!=b.first) return a.first>b.first;
        return a.second<b.second;
    });

    for (auto x:v) {
        cout<<x.second<<' ';
    }
    cout << endl;
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