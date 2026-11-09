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
    string s; cin>>s;

    if(is_sorted(s.begin(),s.end())) {
        cout<<0<<endl; return;
    }

    ll total_zeros=0;
    for (char c:s){ if(c=='0')total_zeros++; }

    if(s[0]=='1'){
        cout<<total_zeros<<endl;
        return;
    }

    ll ans=n-total_zeros;
    ll ones=0,zeros=0;
    for (char c:s) {
        if (c=='1') {
            ans=min(ans,ones+(total_zeros-zeros));
            ones++;
        }
        else zeros++;
    }

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