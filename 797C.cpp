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
    ll n=s.length();

    string mn(n,' ');
    mn[n-1]=s[n-1];
    for(ll i=n-2;i>=0;i--){
        mn[i]=min(s[i],mn[i + 1]);
    }

    stack<char> t;
    string u="";

    ll i = 0;
    while(i<n || !t.empty()){
        if(!t.empty() && (i==n || t.top()<=mn[i])){
            u += t.top();
            t.pop();
        }
        else if(i<n){
            t.push(s[i]);
            i++;
        }
    }

    cout<<u<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}