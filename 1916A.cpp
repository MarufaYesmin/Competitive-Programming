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

    ll curr_multi=1;
    for(int i=1;i<=n;i++){
        ll x; cin>>x;
        curr_multi *= x;
    }

    if(2023%curr_multi==0){
        yes;
        
        cout<<2023/curr_multi<<' ';

        for(ll i=1;i<k;i++){
            cout<<1<<' ';
        }
        cout<<endl;
    }
    else{
        no;
    }
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