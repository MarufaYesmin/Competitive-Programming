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
    vll v(n);
    for(auto &a:v) cin>>a;

    sort(all(v));

    ll ans=0,count=0,continuous=0;

    for(ll i=0;i<n;){
        ll j=i;
        while(j<n && v[j]==v[i]) j++;

        count=j-i;

        if(i==0 || v[i]!=v[i-1]+1){
            ans+=count;
        }
        else if(count>continuous){
            ans+=count-continuous;
        }

        continuous=count;
        i=j;
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