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
    ll x,y,k; cin>>x>>y>>k;

    ll along_x=(x+k-1)/k;
    ll along_y=(y+k-1)/k;

    if(along_x>along_y)  cout<<2*along_x-1<<endl;
    else cout<<2*along_y<<endl;
    
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