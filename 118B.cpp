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
    ll n; cin >> n;

    for(ll i=0;i<=n;i++){
        for(ll j=0;j<n-i;j++) cout<<"  ";
        for(ll j=0;j<=i;j++) {
            cout<<j;
            if(i!=0) cout<<" ";
        }
        for(ll j=i-1;j>=0;j--) {
            cout<<j;
            if(j!=0) cout<<" ";
        }
        cout<<endl;
    }
    for(ll i=n-1;i>=0;i--){
        for(ll j=0;j<n-i;j++) cout<<"  ";
        for(ll j=0;j<=i;j++) {
            cout<<j;
            if(i!=0) cout<<" ";
        }
        for(ll j=i-1;j>=0;j--) {
            cout<<j;
            if(j!=0) cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    abcd();
    return 0;
}