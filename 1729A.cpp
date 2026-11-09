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

void abcd()
{
    ll a,b,c;
    cin>>a>>b>>c;

    ll t1=abs(a-1);
    ll t2=abs(b-c)+abs(c-1);

    if(t1<t2)
        cout<<1<<endl;
    else if(t2<t1)
        cout<<2<<endl;
    else
        cout<<3<<endl;
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