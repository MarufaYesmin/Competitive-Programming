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
//    ll n; cin>>n;
//    string s; cin>>s;

//    ll ans=0,distinc=0;
   
//    vector<bool> v(26,false);
//    for(ll i=0;i<s.length();i++){
//     if(v[s[i]-'a']==false){
//         v[s[i]-'a']=true;
//         distinc ++;
//     }
//     ans+=distinc;
//    }
//    cout<<ans<<endl;
// }

// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
//     ll t;
//     cin>>t;
//     while(t--){
//         abcd();
//     }
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
    ll n,ans=0; cin>>n;
    string s; cin>>s;

    set<char> st;

    for(char c:s){
        st.insert(c);
        ans += st.size();
    }
    cout<<ans<<endl;

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