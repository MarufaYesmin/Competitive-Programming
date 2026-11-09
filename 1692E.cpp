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
    ll n,s,total=0; cin>>n>>s;
    vector<ll> v(n);
    for(auto &a:v){
        cin>>a;
        total+=a;
    } 

    if(s>total){
        cout<<-1<<endl;
        return;
    }

    vector<ll> pre(n); pre[0]=v[0];
    for(ll i=1;i<n;i++){
        pre[i] = pre[i-1]+v[i];
    }

    ll i=0 ,sum=0 ,mx=0LL;

    for(ll j=0;j<n;j++){
        sum+=v[j];

        while(sum>s){
            sum-=v[i];
            i++;
        }
        if(sum==s){
            mx=max(mx,j-i+1);
        }
        
    }
    cout<<n-mx<<endl;
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