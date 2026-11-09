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
    string s; cin>>s;

    s = " "+s; // to create 1 index

    vector<ll> arr(n+1,0);
    ll ans=0;

   for(ll i=1;i<=n;i++){
    for(ll j=i;j<=n;j+=i){
        if(s[j]=='1') break;
        if(!arr[j]){
            ans += i;
            arr[j] = 1;
        }
    }
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


// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// #define endl "\n"

// void abcd(){
//     ll n;
//     cin >> n;

//     string s;
//     cin >> s;
//     s = " " + s;   // 1-indexed

//     vector<ll> vis(n + 1, 0);
//     ll ans = 0;

//     for(ll i = 1; i <= n; i++){
//         for(ll j = i; j <= n; j += i){
//             if(s[j] == '1') break;
//             if(!vis[j]){
//                 ans += i;
//                 vis[j] = 1;
//             }
//         }
//     }

//     cout << ans << endl;
// }

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t;
//     cin >> t;
//     while(t--){
//         abcd();
//     }
// }