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
//     ll n;cin>>n;
//     vector<ll> v(n);
//     unordered_map<ll,ll> mp;
//     for(auto &a:v){
//          cin>>a;
//          mp[a]++;
//     }

//     ll mx_same=LLONG_MIN;

//     ll mx_distinct=mp.size();

//     for(ll i=0;i<n;i++){
//         mx_same=max(mx_same,mp[v[i]]);
//     }
    
//     cout<<max(min(mx_same-1,mx_distinct),min(mx_same,mx_distinct-1))<<endl;
    
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
    ll n; cin>>n;
    vector<ll> v(n);
    for(auto &a:v) cin>>a;

    sort(all(v));

    ll mx_same=1,mx_distinct=1,count=1;

    for(int i=1;i<n;i++){
        if(v[i]==v[i-1]){
            count++;
        }
        else{
            mx_same=max(mx_same,count);
            count=1;
            mx_distinct++;
        }
    }
    mx_same=max(mx_same,count);

    cout<<max(min(mx_same-1,mx_distinct),min(mx_same,mx_distinct-1))<<endl;

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