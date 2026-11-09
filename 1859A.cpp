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
    unordered_map<ll,ll> mp;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }

    if(mp[v[0]]==n){
        cout<<-1<<endl;
        return;
    }

    ll min_val=*min_element(v.begin(),v.end());

    ll count_min=mp[min_val];

    cout<<count_min<<' '<<n-count_min<<endl;

    for(ll i=0;i<count_min;i++){
        cout<<min_val<<' ';
    }
    cout<<endl;

    for(ll i=0;i<n;i++){
        if(v[i]==min_val) continue;

        cout<<v[i]<<' ';
    }
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