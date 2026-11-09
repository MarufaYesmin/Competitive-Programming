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
        ll n;
        cin >> n;
        vector<ll> v(n);

        for(ll i=0;i<n;i++) cin >> v[i];

        ll count = 0;

        for(ll i=0;i<n;i++){
            ll mx = v[i], mn = v[i];
            ll g = v[i];

            for(ll j=i;j<min(n,i+60);j++){
                mx = max(mx, v[j]);
                mn = min(mn, v[j]);
                g = gcd(g, v[j]);

                if(mx - mn == g) count++;
                
            }
        }

        cout << count << endl;
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