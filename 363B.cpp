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
    ll n,k; cin>>n>>k;
    vector<ll> v(n);
    for(auto &a:v) cin>>a;

    ll sum=0;
    for(int i=0;i<k;i++){
        sum += v[i] ;
    }

    int i=0,ans=sum,left_idx=0;
    
    for(int j=k;j<n;j++){
        sum += v[j];
        sum -= v[i];
        i=i+1;

        if(ans>sum){
            sum = ans ;
            left_idx = i ;
        } 
    }
    cout<<left_idx+1<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}