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
    int n; cin>>n;

    vector<ll> v(n+1,0);
    for(ll i=2;i<=n;i++){
        if(v[i]==0){
            for(ll j=i*2;j<=n;j+=i){
                v[j]++;
            }
        }
    }
    ll almost_prime=0;
    for(ll i=0;i<=n;i++){
        if(v[i]==2) almost_prime++;
    }
    cout<<almost_prime<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}