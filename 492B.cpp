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
    ll n,l; cin>>n>>l;
    vector<double> v(n);
    for(auto &a:v) cin>>a;

    sort(all(v));

    double maximum=max(v[0]-0,l-v[n-1]);

    for(ll i=1;i<n;i++){
        maximum=max(maximum,(v[i]-v[i-1])/2.0);
    }
    cout<<fixed<<setprecision(10)<<maximum<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}