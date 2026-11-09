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
    ll a,b,c,n;
    cin>>a>>b>>c>>n;
    ll m=max({a, b, c});
    ll d=(m - a) + (m - b) + (m - c);
    ll r=n - d;
    if (r>=0 && r%3==0) yes;
    else no; 
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