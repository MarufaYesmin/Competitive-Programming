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
    vector<ll> v(3);
    for(auto &a:v) cin>>a;

    ll sum=v[0]+v[1]+v[2];

    if(sum%2==1){
        cout<<-1<<endl;
        return;
    }
    cout<<min(sum/2,v[0]+v[1])<<endl;;
    
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