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
    ll n,k; cin>>n>>k;
    string s; cin>>s;

    ll ans = 0;
    for(int i=0;i<n; i+=k){
        ll x=k;
        ll count=0;
        ll idx=i;
        while(x--){
            if(s[idx++] == '1') count++;
        }
        if(count==k)  ans++;
    }
    cout << ans << endl;
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