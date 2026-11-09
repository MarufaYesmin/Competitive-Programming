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
    ll cnt1=0,cnt2=0;

    for(ll i=0;i<n;i++){
        ll x; cin>>x;

        if(i%2==0 && x%2==1) cnt1++;
        if(i%2==1 && x%2==0) cnt2++;
    }
    cout<<(cnt1!=cnt2? -1:cnt1)<<endl;;
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