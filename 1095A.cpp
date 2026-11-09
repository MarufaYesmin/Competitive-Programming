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

    ll step=0,i=0;
    while(step<s.size()){
        cout<<s[step];
        i++;
        step+=i;
    }

}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}