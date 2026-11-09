// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// using pll = pair<ll,ll>;
// using vll = vector<ll>;
// using sll = set<ll>;
// #define all(u) (u).begin(),(u).end()
// #define yes cout<<"Yes"<<endl
// #define no cout<<"No"<<endl
// #define endl "\n"

// void abcd(){
//     vector<ll> v(4);
//     for(auto &a:v) cin>>a;

//     ll odd = 0;
//     for(auto x:v) odd += (x&1);

//     if(odd <= 1){
//         yes; return;
//     }

//     if(v[0]>0 && v[1]>0 && v[2]>0){

//         v[0]--;  v[1]--; v[2]--; v[3] += 3;

//         odd = 0;
//         for(auto x:v) odd += (x&1);

//         if(odd <= 1) yes;
//         else no;
//     }
//     else no;
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
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl
#define endl "\n"

void abcd(){
    ll r,g,b,w; cin>>r>>g>>b>>w;

    ll odd = (r&1) + (g&1) + (b&1) + (w&1);

    if(odd<=1){
        yes; return;
    }
    min({r,g,b})>0 && (4-odd)<=1 ? yes : no ;

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