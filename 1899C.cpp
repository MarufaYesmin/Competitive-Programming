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
    vector<ll> v(n);
    for(auto &a:v) cin>>a;

    ll current_sum=v[0],max_sum=v[0];
    for(ll i=1;i<n;i++){
        if(abs(v[i-1])%2!=abs(v[i])%2 && current_sum>0){
            current_sum += v[i];
        }
        else{
            current_sum=v[i];
        }
        max_sum=max(max_sum,current_sum);
    }
    cout<<max_sum<<endl;
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