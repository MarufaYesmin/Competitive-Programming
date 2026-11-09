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
    ll a,b,c,d; cin>>a>>b>>c>>d;

    if(d<b){
        cout<<-1<<endl;
        return;
    }

    ll x=d-b;
    a+=x;

    if(a<c){
        cout<<-1<<endl;
        return;
    }

    cout<<x+abs(a-c)<<endl;
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