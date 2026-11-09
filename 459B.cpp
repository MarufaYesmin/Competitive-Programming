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
    unordered_map<ll,ll> m;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]++;
    } 
    ll maximum = *max_element(v.begin(),v.end());
    ll minimum = *min_element(v.begin(),v.end());

    cout<<maximum-minimum<<' ';
    if(maximum==minimum) cout<<((n*(n-1))/2)<<endl;
    else cout<<m[maximum]*m[minimum]<<endl;

}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}