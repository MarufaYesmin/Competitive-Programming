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
    ll n; cin >> n;
    vector<pair<string,ll>> v(n);
    unordered_map<string,ll> final_mp;

    for(ll i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
        final_mp[v[i].first] += v[i].second;
    }

    ll max_score = -1e18;
    for(auto p : final_mp){
        max_score = max(max_score, p.second);
    }

    unordered_map<string,ll> running_mp;
    for(ll i = 0; i < n; i++){
        running_mp[v[i].first] += v[i].second;

       if(running_mp[v[i].first] >= max_score && final_mp[v[i].first] == max_score){
            cout << v[i].first << "\n";
            return;
        }
    }
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}