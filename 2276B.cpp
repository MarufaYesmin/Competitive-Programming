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

void abcd()
{
    string s; cin>>s;

    ll n=s.size();
    ll ans=1;

    bool inc=false,dec=false;

    for(ll i=1;i<n-1;i++){
        if(s[i-1]==s[i] && s[i]==s[i+1]){
            inc=true;
        }
        else if(s[i-1]==s[i+1] && s[i]!=s[i-1]){
            dec=true;
        }
    }

    ans+=inc+dec;

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