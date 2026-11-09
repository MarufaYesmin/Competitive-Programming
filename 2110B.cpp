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

void abcd()
{
    string s; cin >> s;
    int n = s.size();
 
    int bal = 0;
    for (int i = 1; i + 1 < n; i++) {
        if (s[i] == '(') bal++;
        else bal--;
 
        if (bal < 0) {
            yes; return;
        }
    }
 
    bal==0? no:yes;
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