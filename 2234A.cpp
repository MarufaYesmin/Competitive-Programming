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

    sort(v.rbegin(),v.rend());

    bool ok=true;

    for(ll i=0;i<n-2;i++){
        if(v[i]%v[i+1]!=v[i+2]){
            ok=false;
            break;;
        }
    }
    if(ok){
        cout<<v[0]<<' '<<v[1]<<endl;
    }
    else cout<<-1<<endl;
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