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
    ll n=s.size();

    stack<ll> st;

    for(ll i=0;i<n;i++){
        if(!st.empty() && s[i]==')' && st.top()=='(') st.pop();
        else st.push(s[i]);
    }

    cout<<n-st.size()<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}