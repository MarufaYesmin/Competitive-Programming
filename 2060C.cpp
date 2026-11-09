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
    ll n,k,ans=0; cin>>n>>k;
    vector<ll> v(n);

    map<ll,ll> m;
    
    for(auto &a:v){
        cin>>a;
        m[a]++;
    } 

    for(ll i=0;i<n;i++){
        ll x=v[i];
        ll y=k-x;

        if(x==y){
            if(m[x]>=2){
                ans++;
                m[x] -= 2 ;

            }
        }
        else{
            if(m[v[i]]>=1 && m[k-v[i]]>=1)
            {
                ans++;
                m[v[i]]--;
                m[k-v[i]]--;
            }
        }
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