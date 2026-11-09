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

    ll k=1;

    vector<ll> v(n+2,1);
    for(ll i=2;i*i<=n+1;i++){
        if(v[i]==1){
            for(ll j=i*2;j<=n+1;j+=i){
                if(k==1) k=2;
                v[j]=2;
            }
        }
    }

    cout<<k<<endl;
    for(ll i=2;i<=n+1;i++) cout<<v[i]<<' ';
    cout<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}