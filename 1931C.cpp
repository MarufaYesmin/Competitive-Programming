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

    ll left=0,i=0;
    while(left<n-1 && v[left]==v[left+1]){
        left++;
    }

    ll right=n-2;
    while(right>=0 && v[right]==v[right+1]){
        right--;
    }

    if(left==n-2){
        cout<<0<<endl;
    }
    else if(v[0]!=v[n-1]){
        cout<<n-max(left,right)<<endl;
    }
    else{
        cout<<right-left+1<<endl;
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