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
    int n,m,sum=0; cin>>n>>m;

    vector<ll> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i]; sum+=v[i];
    }
    if((sum%2)!=0) yes;
    else{
        if((n*m)%2==0) yes;
        else no;
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