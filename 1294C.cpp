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

ll func(ll *x,ll i){
    for(int j=i;j*j<=(*x);j++){
        if(*x%j==0){
            *x = *x/j;
            return j;
        } 
    }
    return -1;
}

void abcd(){
    ll n,a,b,c; cin>>n;

    ll temp=n;

    a=func(&n,2);

    a != -1 ? b=func(&n,a+1) : b=-1 ;
    b != -1 ? c=temp/(a*b) : c=0;

    if(c*a*b==temp && b!=c){
        yes;
        cout<<a<<' '<<b<<' '<<c<<endl;
    }
    else no;
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