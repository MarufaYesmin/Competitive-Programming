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

    for(ll i=n-1;i>=1;i--){
        ll x=s[i]-'0';
        ll y=s[i-1]-'0';

        if(x+y >= 10){
            s.replace(i-1,2,to_string(x+y));
            cout<<s<<endl;
            return;
        }
    }

    ll x=(s[0]-'0');
    ll y=(s[1]-'0');
    s.replace(0,2,to_string(x+y));
    cout<<s<<endl;
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