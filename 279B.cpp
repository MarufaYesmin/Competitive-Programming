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
    ll n,t; cin>>n>>t;
    vector<ll> v(n);
    for(auto &a:v) cin>>a;

    ll book=0,sum=0;

    ll i=0;
    for(int k=0;k<n;k++){
        sum += v[k];
        while(sum>t){
            sum -= v[i];
            i++; 
        }
        book=max(book,k-i+1);
    }
    cout<<book<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}