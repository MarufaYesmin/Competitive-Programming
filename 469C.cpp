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
    
    if(n<=24){
        cout<<"YES\n";
        ll x=24/n;
        cout<<n<<' * '<<x<<' = '<<n*x<<endl;

        ll y=24-(x*n);
        for(ll i=1;i<=y;i++){
           cout<<n<<' + '<<1<<' = '<<n+1<<endl; 
        }
        y=n-1-y;
        for(ll i=1;i<=y;i++){
           cout<<n<<' * '<<1<<' = '<<n<<endl; 
        }
    }
    else{
        if(n-24 <= 23){
            cout<<"YES\n";
            ll y=n-24;
            for(ll i=1;i<=n;i++){
                cout<<n<<' - '<<1<<' = '<<n-1<<endl; 
            }
            y=23-y;
            for(ll i=1;i<=y;i++){
           cout<<n<<' * '<<1<<' = '<<n<<endl; 
           }
        }
        else cout<<"NO\n";
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}