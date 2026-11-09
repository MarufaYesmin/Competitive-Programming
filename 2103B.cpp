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
    string s; cin>>s;

    ll changes=0;

    for(ll i=1;i<n;i++){
        if(s[i]!=s[i-1]) changes++;
    }
    if(s[0]=='1') changes++;

    ll ans=n+changes;

    if(changes>=3) ans-=2;
    else if(changes==2) ans-=1;

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