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
    vector<string> v(n);
    for(auto &a:v) cin>>a;

    vector<ll> freq(m,0);
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if(v[i][j]=='1') freq[j]++;
        }
    }

    for(ll i=0;i<n;i++){
        bool can_rmv=true;
        for(ll j=0;j<m;j++){
            if(v[i][j]=='1' && freq[j]==1){
                can_rmv=false;
                break;
            }
        }
        if(can_rmv){
            yes;
            return;
        }
    }
    no;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    abcd();
}