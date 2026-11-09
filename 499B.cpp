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
    ll n,p; cin>>n>>p;

    map<string,string> m;

    while(p--){
        string s1,s2; cin>>s1>>s2;
        m[s1]=s2;
    }
    for(ll i=0;i<n;i++){
        string s; cin>>s;
        if(s.length()<=m[s].length()){
            cout<<s<<' ';
        }
        else cout<<m[s]<<' ';
    }
    cout<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}