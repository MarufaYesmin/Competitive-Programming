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

    stack<char> st;
    vector<pair<string,ll>> ans;

    for(ll i=0;i<n;){
        string store="";
        ll count=0;
        if(!st.empty()){
            char top=st.top();
            while((top=='(' && s[i]==')') || (top=='[' && s[i]==']')){
                if(s[i]==']') count++; 
                   
                store = top+store;
                store = store+s[i++];

                st.pop();

                if(!st.empty()) top=st.top();
            }

            if(store!="") ans.push_back({store,count});
            i++;
        }

        if(s[i]=='(' || s[i]=='[') st.push(s[i]);
    }

    sort(ans.rbegin(),ans.rend());

    ll i=0,mx=0;
    while(i<ans.size() && ans[i].first == ans[0].first){
        mx=max(mx,ans[i].second);
        i++;
    }
    cout<<mx<<endl<<ans[0].first<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}