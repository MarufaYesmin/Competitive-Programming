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
    string s; cin>>s;

    ll n=s.size();

    ll totalZero=0,totalOne=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='1') totalOne++;
        else totalZero++;
    }

    ll ans=min(totalOne,totalZero);

    ll prefZero=0,prefOne=0;

    for(ll i=0;i<n;i++){
        if(s[i]=='0') prefZero++;
        else prefOne++;


        ll sufZero = totalZero - prefZero ;
        ll sufOne = totalOne - prefOne ;

        ans = min(ans , prefZero+sufOne);
        ans = min(ans , prefOne+sufZero);

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