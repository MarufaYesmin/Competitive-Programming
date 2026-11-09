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

    ll count0=0;

    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==0) count0++;
    }

    if(count0<2){
        cout<<-1<<endl;
        return;
    }

    if(v[0]==0 && v[n-1]==0) {
        cout<<0<<endl;
    }
    else if(v[0]==1 && v[n-1]==1){
        cout<<2<<endl;
    }
    else{
        cout<<1<<endl;
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