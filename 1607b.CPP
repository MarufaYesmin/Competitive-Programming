#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vll=vector<ll>;
using sll=set<ll>;

#define all(u) (u).begin(),(u).end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"

void abcd(){
    ll x0,n; cin>>x0>>n;

    ll d;

    if(n%4==0) d=0;
    else if(n%4==1) d=n;
    else if(n%4==2) d=-1;
    else d=-n-1;

    if(x0%2==0) cout<<x0-d;
    else cout<<x0+d;

    cout<<endl;
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

