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

ll calPow(int a,int n){
    if(n==0) return 1;

    ll half=calPow(a,n/2);

    if(n%2==0) return half*half;

    return half* half* a;
}

void abcd(){
    ll n; cin>>n;
    vector<ll> v(n);
    for(auto &a:v) cin>>a;

    ll count=0;

    for(ll i=0;i<n;i++){
        while(v[i]%2==0){
            count++;
            v[i]/=2;
        }
    }

    sort(all(v));

    ll sum=0;
    for(ll i=0;i<n-1;i++){
        sum += v[i] ;
    }

    cout<< (v[n-1]*calPow(2,count)) +  sum<<endl;
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