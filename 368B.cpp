// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// using pll = pair<ll,ll>;
// using vll = vector<ll>;
// using sll = set<ll>;
// #define all(u) (u).begin(),(u).end()
// #define yes cout<<"YES"<<endl
// #define no cout<<"NO"<<endl
// #define endl "\n"

// void abcd(){
//     ll n,m; cin>>n>>m;
//     vector<ll> v(n);
//     for(auto &a:v) cin>>a;

//     vector<ll> pre(n,0);
//     map<ll,ll> mp;

//     pre[n-1]=1;
//     mp[v[n-1]]=1;
//     for(ll i=n-2;i>=0;i--){
        
//         if(mp[v[i]]==0) pre[i]+=pre[i+1]+1;
//         else pre[i]+=pre[i+1];
//         mp[v[i]]=1;
//     }

//     while(m--){
//         ll x; cin>>x;
//         cout<<pre[x-1]<<endl;
//     }
// }

// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
//     abcd();
// }

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
    ll n,m; cin>>n>>m;
    vector<ll> v(n);
    for(auto &a:v) cin>>a;

    unordered_set<ll> st; vector<ll> ans(n,0);
    for(ll i=n-1;i>=0;i--){
        st.insert(v[i]);
        ans[i]=st.size();
    }
    while(m--){
        ll x; cin>>x;
        cout<<ans[x-1]<<endl;
    }
  
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}