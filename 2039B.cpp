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

    ll n=s.length();

    if(n==1) {
        cout<<"-1\n";
        return;
    }

    for(ll i=0;i+1<n;i++){
        if(s[i]==s[i+1]){
            cout<<s[i]<<s[i+1]<<endl;
            return;
        }
    }
    for(ll i=1;i+1<n;i++){
        if(s[i-1]!=s[i] && s[i]!=s[i+1] && s[i-1]!=s[i+1]){
            cout<<s[i-1]<<s[i]<<s[i+1]<<endl;
            return;
        }
    }
    cout<<"-1\n"; 
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