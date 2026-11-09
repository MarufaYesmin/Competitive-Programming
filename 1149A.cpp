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
    int arr[n];

    int countOne=0,countTwo=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1) countOne++;
        else countTwo++;
    } 
    if(countTwo>=1){
        cout<<2<<' ';
        countTwo--;
    }
    if(countOne>=1){
        cout<<"1 ";
        countOne--;
    }
    for(int i=1;i<=countTwo;i++) cout<<"2 ";
    for(int i=1;i<=countOne;i++) cout<<"1 ";
    cout<<'\n';
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}