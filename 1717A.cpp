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

    ll ans=0;

    //lcm/gcd=1 that means all pairs (a,a) -> n pairs
    ans += n ;

    // lcm/gcd=2 that means all pairs (a,2a) -> (n/2)*2 pairs
    ans += (n/2)*2;

    // lcm/gcd=3 that means all pairs (a,3a) -> (n/3)*2 pairs
    ans += (n/3)*2;

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