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
    ll n,k; cin>>n>>k;

    ll ans=0;
    for(ll i=0;i<=n;i++){
        ll first=n;
        ll second=i;

        bool isvalid=true;

        for(int j=k-2;j>=1;j--){
            ll newElement=first-second;
            if(newElement<0) {
                isvalid=false; break;
            }
            if(newElement>second){
                isvalid=false;
                break;
            }
            first=second;
            second=newElement;
        }
        if(isvalid){
            ans++;
        }
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