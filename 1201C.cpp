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
    ll n,k; cin>>n>>k;
    vector<ll> v(n);
    for(auto &a:v) cin>>a;

   
    sort(all(v));

    for(ll i=n/2;i<n-1;i++){
        ll need=(v[i+1]-v[i])*(i- n/2+1);

        if(need<=k){
            k-=need;
            v[n/2]=v[i+1];
        }
        else{
            v[n/2]+=k/(i-n/2+1);
            k=0;
            break;
        }
    }

    if(k>0){
        v[n/2]+=k/(n-n/2);
    }

    cout<<v[n/2]<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}