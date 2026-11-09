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
    ll a,b,c; cin>>a>>b>>c;

    if(a<b){
        if(abs(a-b) > abs(a+c-b)) cout<<abs(a-b)<<endl;
        else cout<<abs(a+c-b)<<endl;
    }
    else{
        cout<<abs(a+c-b)<<endl;
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