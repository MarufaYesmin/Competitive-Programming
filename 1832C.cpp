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
    vector<ll> a(n);
    for(auto &p:a) cin>>p;

    vector<ll> b;
    b.push_back(a[0]);
    for(ll i=1;i<n;i++){
        if(a[i]!=b.back()){
            b.push_back(a[i]);
        }
    }

    if(b.size()<=2){
        cout<<b.size()<<endl;
        return;
    }

    ll ans=2;

    for(ll i=1;i<b.size()-1;i++){
        if((b[i]>b[i-1] && b[i]>b[i+1]) || (b[i]<b[i-1] && b[i]<b[i+1])) ans++;
    }

    cout<<ans<<endl;
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