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

    vector<ll> ans(n);

    for(ll i=0; i<n; ){
        ll j = i;
        while(j < n && v[j] == v[i]) j++;
        
        if(j - i == 1){ 
            cout << -1 << endl;
            return;
        }
        
        for(ll k = i; k < j; k++){
            ans[k] = (k == j - 1) ? (i + 1) : (k + 2);
        }
        i = j;
    }

    for(auto &a:ans) cout<<a<<' ';
    cout<<endl;
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