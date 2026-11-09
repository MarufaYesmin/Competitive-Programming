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

   ll ans=1;
    for(ll i=1;i<n;i++){
        if(s[i]!=s[i-1])  ans++;
    }

    ll count = 0; 
    for(ll i=1;i<n -1;i++){
        if(s[i]!=s[i-1] && s[i]!=s[i+1]){
            if(s[i-1]==s[i+1]) count = max(count,2LL);
            else  count = max(count,1LL); 
        }
    }

    cout<<ans-count<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        abcd();
    }
}