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
    st.push(-1);
    unordered_map<ll,ll> mp;

    for(ll i=0;i<n;i++){
        if(s[i]=='('){
            st.push(i);
        }
        else{
            st.pop();
            if(st.empty()){
                st.push(i);
            }
            else{
                ll len=i-st.top();
                mp[len]++;
            }
        }
    }

    ll mx=0,nm=1;

    for(auto &a:mp){
        if(a.first>mx){
            mx=a.first;
            nm=a.second;
        }
    }

    cout<<mx<<' '<<nm<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}