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
    string a,b; cin>>a>>b;

    ll len=0;
    ll n=a.length(),m=b.length();
    for(ll i=0;i<n;i++){
        for(ll j=0;j<b.length();j++){
            ll k=0;
            while(i+k<n && j+k<m && a[i+k]==b[j+k]){
                k++;
            }
            len=max(len,k);
        }
    }
    cout<<n+m-(2*len)<<endl;
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