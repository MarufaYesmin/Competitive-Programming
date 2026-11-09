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
    map<ll,ll> mp;

    ll sum = 0;
    for(auto &a:v){
        cin >> a;
        sum += a;
        mp[a]++;
    }

    ll mx=0,val=0;
    for(auto it:mp){
        if(it.second > mx){
            mx = it.second;
            val = it.first;
        }
    }

    ll other=n-mx;
    if(mx<=other+1){
        cout<<sum<<endl;
    }
    else{
        cout<<sum-mx*val+(other+2)*val<<endl;
    }
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