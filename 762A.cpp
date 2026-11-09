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
vector<ll> v;

ll divisors(ll x){
    for(ll i=1;i*i<=x;i++){
        if(x%i==0){
            v.push_back(i);
            if(i*i != x) v.push_back(x/i);
        }
    }
}
void abcd(){
    ll n,k; cin>>n>>k;
    divisors(n);
    sort(v.begin(),v.end());
    if(v.size()>=k) cout<<v[k-1]<<endl;
    else cout<<-1<<endl;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
        abcd();
    
}