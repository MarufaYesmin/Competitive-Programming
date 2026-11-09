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
    multiset<ll> m;
    for(ll i=0;i<n;i++){
        ll x; cin>>x;
        m.insert(x);
    }

    vector<ll> a(n);
    auto firstIdx=m.upper_bound(0);

    if(firstIdx==m.end()){
        cout<<-1<<endl;
        return;
    }

    a[0]=*firstIdx;
    m.erase(firstIdx);

    for(ll  i=1;i<n;i++){
        auto idx=m.upper_bound(-a[i-1]);
        if(idx==m.end()){
            cout<<-1<<endl;
            return;
        }
        a[i]=a[i-1]+ *idx;
        m.erase(idx);
    }

    for(auto &p:a) cout<<p<<' ';
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