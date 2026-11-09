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

    if(n==1){
        cout<<1<<endl;
        return;
    }
    if(n==2){
        cout<<-1<<endl;
        return;
    }

    vector<vector<int>> matrix(n,vector<int>(n));

    ll even=2,odd=1;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            if(even<=n*n){
                matrix[i][j]=even;
                even+=2;
            }
            else{
                matrix[i][j]=odd;
                odd+=2; 
            }
        }
    }

    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
           cout<<matrix[i][j]<<' ';
        }
        cout<<endl;
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