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
    ll n,p,q; cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i];

    bool ok=true;
    for(ll i=0;i<n-1;i++){
        for(ll j=i+1;j<n;j++){
            if((arr[j]%arr[i])%2==0){
                p=arr[i];
                q=arr[j];
                ok=false;
                break;
            }
        }
    }
    if(ok) cout<<"-1\n";
    else cout<<p<<' '<<q<<endl;

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