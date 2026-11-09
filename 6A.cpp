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
    vector<ll> v(4);
    for(auto &a:v) cin>>a;

    sort(v.begin(),v.end());

    if(v[0]+v[1]>v[2] || v[1]+v[2]>v[3]) cout<<"TRIANGLE\n";
    else if(v[0]+v[1]==v[2] || v[1]+v[2]==v[3]) cout<<"SEGMENT\n";
    else cout<<"IMPOSSIBLE\n";
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}