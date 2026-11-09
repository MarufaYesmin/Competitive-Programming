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
    ll n; string s;
    cin>>n>>s;

    ll desh=0,underscr=0;

    for(ll i=0;i<n;i++){
        if(s[i]=='-') desh++;
        else underscr++;
    }

    if(desh<2 || underscr==0){
        cout<<0<<endl;
        return;
    }

    ll ans = underscr * (desh/2) * (n - underscr - desh/2) ;
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