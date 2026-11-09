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
    ll n,m,k; cin>>n>>m>>k;

    string s; cin>>s;

    ll count0=0,ans=0;

    for(ll i=0;i<n;i++){
        if(s[i]=='0') count0++;
        else count0=0;

        if(count0==m){
            ans++;
            i += (k-1);
            count0=0;
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