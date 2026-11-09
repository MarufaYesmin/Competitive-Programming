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
    ll n,c; cin>>n>>c;
    vector<ll> v(n);

    for(ll i=0;i<n;i++){
        cin>>v[i];
        v[i] += (i+1);
    }

    sort(all(v));
    
    ll cnt=0;

    for(ll i=0;i<n;i++){
        c -= v[i];
        if(c>=0) cnt++;
        else break;
    }
    cout<<cnt<<endl;
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