
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
    ll s,q; cin>>s>>q;
    vector<ll> d;
    for(ll i=1;i*i<=s;i++){
        if(s%i==0){
            d.push_back(i);
            if(i*i != s) d.push_back(s/i);
        }
    }
    sort(all(d));

    ll n=d.size(),prev=0;
    vector<ll> pref(n);

    for(ll i=0;i<n;i++){
        ll width=d[i]-prev;
        ll height=s/d[i];

        pref[i]=width*height;
        if(i>0) pref[i] +=pref[i-1];
        prev=d[i];
    }

    while (q--) {
        ll x,y; cin>>x>>y;

        ll r = upper_bound(d.begin(), d.end(), x)-d.begin()-1;
        ll c = upper_bound(d.begin(), d.end(), s / y)-d.begin()-1;

        ll ans=0,high = min(r, c);
        if (high>=0) ans += d[high]*y;

         if (r>c){
             ans += pref[r];
             if (c>=0) ans -= pref[c];
        }
        ll nxt=r+1;

        if (nxt<n) {
            ll width=x-d[r];
            ll height=s/d[nxt];

            ans+=width*min(y,height);
        }
        cout<<ans<<endl;
    }
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