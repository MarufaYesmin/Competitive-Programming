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
    ll n,sum=0; cin>>n;
    vector<ll> v(n);
    for(auto &a:v){
        cin>>a;
        sum+=a;
    } 

    if(sum%3 != 0){
        cout<<0<<endl;
        return;
    }

    ll target=sum/3;

    ll cnt=0,ans=0;
    sum=0;
    for(ll i=0;i<n-1;i++){
        sum+=v[i];
        if(sum==2*target) ans+=cnt;
        if(sum==target) cnt++;
    }  

    cout<<ans<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
        abcd();
}