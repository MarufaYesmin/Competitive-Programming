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

    ll first_large=LLONG_MIN,second_large=LLONG_MIN;
    for(ll i=0;i<n;i++){
        if(v[i]>=first_large){
            second_large=first_large;
            first_large=v[i];
        }
        if(v[i]>second_large && v[i]!=first_large) second_large=v[i];
    }
    for(ll i=0;i<n;i++){
        if(v[i]==first_large) cout<<first_large-second_large<<' ';
        else cout<<v[i]-first_large<<' ';
    }
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