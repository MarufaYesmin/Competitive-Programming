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

ll lcm(ll a,ll b){
    return a/__gcd(a,b)*b;
}

void abcd(){
    string s1,s2;
    cin>>s1>>s2;

    ll n1=s1.size(), n2=s2.size();

    ll y = lcm(n1,n2);

    string a="", b="";

    for(ll i=0;i<y/n1;i++) a+=s1;
    for(ll i=0;i<y/n2;i++) b+=s2;

    if(a==b) cout<<a<<endl;
    else cout<<-1<<endl;
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