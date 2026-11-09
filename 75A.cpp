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

ll WthoutZero(ll a){
    ll rem,newNUm=0,pow=1;
    while(a){
        rem=a%10;
        if(rem!=0){
            newNUm += rem*pow;  pow*=10;
        }
        a/=10;
    }
    return newNUm;
}

void abcd(){
    ll x,y,c; cin>>x>>y;

    c=x+y;
    WthoutZero(x)+WthoutZero(y) == WthoutZero(c)? yes : no ;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}