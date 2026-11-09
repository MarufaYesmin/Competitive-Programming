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

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    ll n; cin>>n;
    vector<pair<ll,ll>> v1(n);
    for(ll i=0;i<n;i++){
        cin>>v1[i].first>>v1[i].second;
    }
    sort(v1.begin(),v1.end());
    bool found=false;

    for(ll i=0;i<n-1;i++){
        if(v1[i].second>v1[i+1].second){
            cout<<"Happy Alex\n";
            return 0;
        }
    }
    cout<<"Poor Alex\n";
   
}