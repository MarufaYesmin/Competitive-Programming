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

bool valid(string s){
    ll n = s.length();
    stack<char> st; 

    for(ll i = 0; i < n; i++){
        if(s[i] == '('){
            st.push('(');
        } else { 
            if(!st.empty() && st.top() == '('){
                st.pop();
            } else {
                st.push(')'); 
            }
        }
    }

    return st.empty();
}

bool calculate(string s,char ch){
        string temp1=s,temp2=s;
        ll n=s.length();
        for(ll i=0;i<n;i++){
            if(s[i]==ch){
                temp1[i]='(';
                temp2[i]=')';
            } 
            else{
                temp1[i]=')';
                temp2[i]='(';
            } 
        }

        if(valid(temp1) || valid(temp2)){
            return true;
        }

        return false;
}

void abcd(){
    string s; cin>>s;
    ll n=s.length();

    ll countA=0,countB=0,countC=0;
    for(ll i=0;i<s.length();i++){
        if(s[i]=='A') countA++;
        else if(s[i]=='B') countB++;
        else countC++;
    }

    if(countA==countB+countC){
       if(calculate(s,'A')) { yes; return; }
    }
    else if(countB==countA+countC){
        if(calculate(s,'B')) { yes; return; }
    }
    else if(countC==countA+countB){
         if(calculate(s,'C')) { yes; return; }
    }
    
    no;
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