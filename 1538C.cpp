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
//     ll n,l,r; cin>>n>>l>>r;
//     vector<ll> v(n);
//     for(auto &a:v) cin>>a;

//     ll cnt=0;

//     for(ll i=0;i+1<n;i++){  // O(n^2) - will show TLE
//         for(ll j=i+1;j<n;j++){
//             ll sum=v[i]+v[j];
//             if(sum>=l && sum<=r) cnt++;
//         }
//     }
//     cout<<cnt<<endl;
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

ll calculate(vector<ll> &v,ll x){ //binary search
    ll cnt=0,st=0,end=v.size()-1;

    while(st<end){

        if(v[st]+v[end] <= x){
            cnt += (end-st) ;
            st++;
        } 
        else end--;
    }
    return cnt;
}

void abcd(){
    ll n,l,r; cin>>n>>l>>r;
    vector<ll> vec(n);
    for(auto &a:vec) cin>>a;

    ll cnt=0;

    sort(all(vec));

    ll count = calculate(vec,r) - calculate(vec,l-1);

    cout<<count<<endl;
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