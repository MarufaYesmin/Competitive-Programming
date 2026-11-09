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
    string s; cin>>s;
    ll ans=0,n=s.length();

    for(ll i=0;i<n;i++){
        if(s[i]!='Q') continue;
        for(ll j=i+1;j<n;j++){
            if(s[j]!='A') continue;
            for(ll k=j+1;k<n;k++){
                if(s[k]=='Q') ans++;
            }
        }
    }
    cout<<ans<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}