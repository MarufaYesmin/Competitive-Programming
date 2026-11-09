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
    ll n,c; cin>>n>>c;
    vector<ll> a(n);
    for(auto &p:a) cin>>p;
    vector<ll> b(n);
    for(auto &p:b) cin>>p;

    ll ans1=0;

    for(ll i=0;i<n;i++){
        if(a[i]<b[i]){
            ans1=LONG_MAX;
            break;
        }
        ans1+=(a[i]-b[i]);
    }

    sort(all(a));
    sort(all(b));

    ll ans2=0;
    for(ll i=0;i<n;i++){
        if(a[i]<b[i]){
            cout<<-1<<endl;
            return;
        }
        ans2+=(a[i]-b[i]);
    }
    ans2+=c;

    cout<<min(ans1,ans2)<<endl;
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