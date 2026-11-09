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
    ll n,q; cin>>n>>q;

    vector<ll> v1(n);
    for(auto &a:v1) cin>>a;

    vector<ll> v2(n);
    for(auto &a:v2) cin>>a;

    for(ll i=0;i<n;i++){
       v1[i] = max(v1[i],v2[i]);
    }

   for(ll i = n - 2; i >= 0; i--){
      if(v1[i+1] > v1[i]) v1[i] = v1[i+1];
   }

    vector<ll> pref_sum(n+1,0);
    for(ll i=0;i<n;i++){
        pref_sum[i+1]=pref_sum[i] + v1[i];
    }

    while(q--){
        ll l,r,sum=0; cin>>l>>r;

        l--;

        cout << pref_sum[r] - pref_sum[l] << " ";
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