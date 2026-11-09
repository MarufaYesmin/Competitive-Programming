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
    ll countEven=0;

    vector<ll> v;

    for(ll i=0;i<n;i++){
        ll x; cin>>x;
        if(x%2==0) countEven++;
        else{
            v.push_back(x);
        }
    }

    ll countOdd=n-countEven;

    ll count=0;

    for(ll i=0;i<v.size();i++){
        for(ll j=i+1;j<v.size();j++){
            if(__gcd(v[i],v[j]) > 1)  count++;
        }
    }

    cout<<countOdd*countEven + count + (countEven*(countEven-1))/2<<endl;
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