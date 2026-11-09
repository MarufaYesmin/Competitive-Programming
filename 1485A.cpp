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
    ll a,b,ans=LLONG_MAX; cin>>a>>b;

    for(ll add=0;add<=30;add++){
        ll currB=b+add;
        ll currA=a;

        if(currB==1) continue;

        ll count=add;

        while(currA){
            currA/=currB;
            count++;
        }
        ans=min(ans,count);
    }
    cout<<ans<<endl;
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