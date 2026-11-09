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
    ll n,q; cin>>n>>q;
    vector<ll> v(n);
    for(auto &a:v) cin>>a;

    vector<ll> out_range(n+1,0);
    for(ll i=1;i<=q;i++){
        ll l,r; cin>>l>>r;
        l--; r--; 

        if(l>0){
            out_range[0]++;
            out_range[l]--;
        }
        if(r+1<n){
            out_range[r+1]++;
            out_range[n]--;
        }
    }

    for(int i=1;i<n;i++){
        out_range[i]+=out_range[i-1];
    }

    vector<ll> pos(n,0); 
    for(int i = 0; i < n; i++){
        pos[i] = q - out_range[i];
    }

    sort(all(v));
    sort(all(pos));

    ll sum=0;
    for(ll i=0;i<n;i++){
        sum+=(pos[i]*v[i]);
    }
    cout<<sum<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    abcd();
    return 0;
}