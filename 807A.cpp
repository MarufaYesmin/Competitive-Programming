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

    vector<pair<ll,ll>> p(n);
    for(auto &a:p) cin>>a.first>>a.second;

    bool ok=true, order=false;
    for(ll i=0; i<n-1; i++){
        if(p[i].first != p[i].second) ok=false;
        if(p[i].first < p[i+1].first) order=true;
    }
    if(p[n-1].first != p[n-1].second) ok=false;

    if(!ok){
        cout<<"rated\n";
    }
    else if(order){
        cout<<"unrated\n";
    }
    else{
        cout<<"maybe\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    abcd();
}