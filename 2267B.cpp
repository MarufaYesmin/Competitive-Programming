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
    vector<ll> v(n), cnt(101, 0);

    for(auto &a:v){
        cin>>a; cnt[a]++;
    }

    ll mx = *max_element(all(v));
    ll k = cnt[mx];

    vector<ll> ans, extra;

    for(ll i=100; i>=1; i--){
        if(i == mx) continue;

        ll x = min(cnt[i], k);

        while(x--){
            ans.push_back(i);
            cnt[i]--;
        }
    }

    bool remaining = true;
    while(remaining){
        remaining = false;
        for(ll i=100; i>=1; i--){
            if(i == mx) continue;
            if(cnt[i] > 0){
                extra.push_back(i);
                cnt[i]--;
                remaining = true;
            }
        }
    }

    vector<ll> res;

    for(ll i=0; i<k; i++){
        res.push_back(mx);
    }

    for(auto x:ans){
        res.push_back(x);
    }

    for(auto x:extra){
        res.push_back(x);
    }

    for(auto x:res) cout<<x<<' ';
    cout<<endl;
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