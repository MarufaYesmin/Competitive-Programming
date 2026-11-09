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
    vector<ll> v(3);
    for(auto &a:v) cin>>a;

    sort(v.begin(),v.end());

    if(v[1]!=v[2]) no;
    else{
        yes; cout<<v[0]<<' '<<v[0]<<' '<<v[1]<<endl;
    }
    
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