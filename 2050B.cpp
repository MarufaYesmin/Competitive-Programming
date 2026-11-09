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

    ll oddSum=0,evenSum=0,oddNum=0,evenNum=0;

    for(int i=0;i<n;i++){
        if(i%2==0){
            oddSum+=v[i];
            oddNum++;
        }
        else{
            evenSum+=v[i];
            evenNum++;
        }
    }

    if((oddSum % oddNum == 0) && (evenSum % evenNum == 0) && (oddSum * evenNum == evenSum * oddNum)) yes;
    else no;
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