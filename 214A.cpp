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
    ll n,m; cin>>n>>m;

    ll count=0;
    for(ll i=0;i<=n;i++){
        for(ll j=0;j<=m;j++){
            if((i*i+j==n) && (i+j*j==m)){
                count++;
            }
        }
    }
    cout<<count<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
   abcd();
}