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
    vector<ll> v(7);
    for(auto &a:v){
        cin>>a;
        sum+=a;
    }
    n=n%sum;
    if(n==0)  n=sum;
    
    ll i=1;
    for (ll i=0;i<7;i++) {
        n-=v[i];
        if (n<=0) {
            cout<<i + 1;
            break;
        }
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}