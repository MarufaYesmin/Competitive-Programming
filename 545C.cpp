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
    vector<ll> x(n);
    vector<ll> h(n);

    for(ll i=0;i<n;i++){
        cin>>x[i]>>h[i];
    }

    if(n==1){
        cout<<1<<endl;
        return;
    }

    ll ans=1;
    ll last_pos=x[0];

    for(ll i=1;i<n-1;i++){
        if(x[i]-h[i]>last_pos){
            ans++;
            last_pos=x[i];
        }
        else if(x[i]+h[i]<x[i+1]){
            ans++;
            last_pos=x[i]+h[i];
        }
        else{
            last_pos=x[i];
        }
    }

    ans++;

    cout<<ans<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}