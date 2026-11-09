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

    if(n%2==0){
        cout<<2<<endl;
        cout<<1<<' '<<n<<endl; cout<<1<<' '<<n<<endl;
    }
    else {
        cout<<4<<endl;
        cout<<1<<' '<<n-1<<endl; cout<<1<<' '<<n-1<<endl;
        cout<<2<<' '<<n<<endl; cout<<2<<' '<<n<<endl;
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