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

    if(n==1){
        cout<<0<<endl;
        return;
    }

    ll gcd=__gcd(abs(v[n-1]-v[0]),(ll)0);
    for(int i=1;i<n/2;i++){
        gcd=__gcd(gcd,abs(v[i]-v[n-i-1]));
    }

    cout<<gcd<<endl;
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