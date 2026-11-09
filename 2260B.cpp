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
    ll x,y,k; cin>>x>>y>>k;

    ll count=0;

    ll dis=y-x;

    ll upPoint=min(k,max(0LL,dis-x+1));

    for(ll i=0;i<upPoint;i++){
        count+= dis%(x+i) ;
    }
    count += (k-upPoint)*dis;

    cout<<count<<endl;
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