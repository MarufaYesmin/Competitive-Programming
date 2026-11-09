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
    ll n,cnt=0; cin>>n;
    string s; cin>>s;

    unordered_map<char,ll> mp;

    vector<ll> pre(n,0);
    for(ll i=0;i<n;i++){
        if(mp[s[i]]==0){
            cnt++;
            mp[s[i]]=1;
        }
        pre[i]=cnt;
    }

    mp.clear();

    cnt=0; 

    vector<ll> suf(n,0);
    for(ll i=n-1;i>=1;i--){
        if(mp[s[i]]==0){
            cnt++;
            mp[s[i]]++;
        }
        suf[i]=cnt;
    }

    ll mx=LLONG_MIN;

    for(ll i=0;i<n-1;i++){
        mx=max(mx,pre[i]+suf[i+1]);
    }

    cout<<mx<<endl;
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