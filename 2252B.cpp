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
    string s; cin>>n>>s;

    ll tot0=0,tot1=0;
    for (char c:s) (c=='0'? tot0:tot1)++;

    vector<ll> b;
    for (ll i=0;i<n;) {
        ll j=i;
        while (j<n && s[j]==s[i]) j++;
        b.push_back(s[i] - '0');  i=j;
    }

    ll m = b.size(),ans = -1;
     for (ll L = 0; L <= 1; L++) {
        for (ll R = m - 1; R >= m - 2; R--) {
            if (L<=R && L<m && R>=0) {
                ll kept0=(R-L+2)/2;
                ll kept1=(R-L+1)-kept0;
                if (b[L] == 1) swap(kept0,kept1);

                ll del0=tot0-kept0,del1=tot1-kept1;
                if (abs(del0-del1)<=1) ans=max(ans,R-L+1);
            }
        }
    }
    cout<<(ans==-1? -1:n-ans)<<endl;
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