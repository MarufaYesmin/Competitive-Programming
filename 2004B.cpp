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
    ll l,r,L,R; cin>>l>>r>>L>>R;

    ll left_max=max(l,L);
    ll right_min=min(r,R); 

    if(left_max > right_min){
        cout<<1<<endl;
        return;
    }

    int ans=right_min-left_max;

    if(l!=L) ans++;
    if(r!=R) ans++;

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