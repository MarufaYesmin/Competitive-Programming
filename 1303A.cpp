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

    vector<ll> count;
    for(ll i=0;i<s.length();i++){
        if(s[i]=='1') count.push_back(i);
    }

    ll ans=0;
    for(ll i=0;i+1<count.size();i++){
        ans+= count[i+1]-count[i]-1;
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