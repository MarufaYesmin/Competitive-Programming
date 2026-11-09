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
    ll n; cin>>n;

    ll odd=0,even1=0,even2=0;

    for(ll i=0;i<n;i++){
        ll x; cin>>x;

        if(x%2==1) odd++;
        else if(x%4==0) even1++;
        else even2++;
    }

    cout<<max({odd,even1,even2})<<endl;
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