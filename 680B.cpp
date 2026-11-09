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
    ll n,a; cin>>n>>a;

    vector<ll> v(n);
    for(auto &b:v) cin>>b;

    a--;
    ll ans=0;

    for(int i=0;i<n;i++){
        if(a-i>=0 && a+i<n){
            if(v[a-i]==1 && v[a+i]==1){
                if(a-i==a+i) ans+=1;
                else  ans+=2;
            }
        }
        else if(a-i>=0 && v[a-i]==1) ans+=1;
        else if(a+1<n && v[a+i]==1) ans+=1;
    }
    cout<<ans<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
   abcd();
}