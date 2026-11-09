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
    vector<ll> v(10,0);
    for(ll i=0;i<n;i++){
        ll x; cin>>x;
        v[x%10]++;
    }
    vector<ll> ans;
    for(ll i=0;i<10;i++){
        v[i]=min(v[i],3LL);
        for(int j=0;j<v[i];j++) ans.push_back(i);
    }

    ll len=ans.size();
    for(ll i=0;i<len-2;i++){
        for(ll j=i+1;j<len-1;j++){
            for(ll k=j+1;k<len;k++){
                if((ans[i]+ans[j]+ans[k])%10 == 3){
                    yes;
                    return;
                }
            }
        }
    }
    no;
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