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

    if(k==0){
        cout<<-1<<endl;
        return;
    }

    if(k<n || k>2*n-1){
        cout<<-1<<endl;
        return;
    }

    vector<vector<ll>> v(n,vector<ll>(n,0));
    ll kl=1;
    ll d=k-n;

     v[n-1][0]=kl++;

    for(ll i=0;i<d;i++){
        v[i][0]=kl++;
    }

    for(ll j=1;j<=d;j++){
        v[n-1][j]=kl++;
    }

    for(ll i=d;i<n-1;i++){
        v[i][i+1]=kl++;
    }

    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            if(v[i][j]==0){
                v[i][j]=kl;
                kl++;
            }
        }
    }

    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
           cout<<v[i][j]<<" ";
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