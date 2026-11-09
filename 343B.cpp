#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;
using vll = vector<ll>;
using sll = set<ll>;
#define all(u) (u).begin(),(u).end()
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl
#define endl "\n"

void abcd(){
    string s; cin>>s;
    ll n=s.length();

    stack<ll> st;

    for(ll i=0;i<n;i++){
        if(!st.empty() && st.top()==s[i]) st.pop();
        else st.push(s[i]);
    }
    if(st.empty()) yes;
    else no;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}