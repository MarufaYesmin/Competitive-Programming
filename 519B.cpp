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
    vector<ll> v1(n);
    for(auto &a:v1) cin>>a;

    vector<ll> v2(n-1);
    for(auto &a:v2) cin>>a;

    vector<ll> v3(n-2);
    for(auto &a:v3) cin>>a;

    ll sum1=accumulate(v1.begin(),v1.end(),0LL);
    ll sum2=accumulate(v2.begin(),v2.end(),0LL);
    ll sum3=accumulate(v3.begin(),v3.end(),0LL);

    cout<<sum1-sum2<<endl<<sum2-sum3<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
   abcd();
}