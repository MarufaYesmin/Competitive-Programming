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

     if (s[0] != '1') {
        no; return;
    }

    for (char c : s) {
        if (c != '1' && c != '4') {
            no; return;
        }
    }
    if (s.find("444") != string::npos) {
        no; return;
    }
    yes;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}