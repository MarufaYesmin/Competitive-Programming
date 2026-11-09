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

    unordered_set<int> s;
    for(ll i = 0; i < n; i++){
        s.insert(v[i]);
    }

    sort(v.begin(),v.end());

    for(ll i=0;i<n;i++){
        for(ll j=0;j<i;j++){
            s.insert(v[i]-v[j]);
        }
    }

    cout<<s.size()<<endl;
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