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
    //(x)!*(x-1)! = (x-1)! * (x+1) 
    // if(x=k-1)  ((k-1)-1)! * ((k-1)+1) = (k-2)! * (k) which is must a multiple of k

    ll k ; cin>>k;
    cout<<k-1<<endl;
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