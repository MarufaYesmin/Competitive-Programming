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
    vector<string> s(n);

    unordered_set<string> st;

    for(ll i=0;i<n;i++){
        cin>>s[i];
        st.insert(s[i]);
    }

    string ans = "" ;

    for(ll i=0;i<n;i++){
        bool ok=false;
        ll len=s[i].length();

        for(ll j=0;j<len;j++){

            string pref = s[i].substr(0,j);
            string suff = s[i].substr(j);

            if(st.count(pref) && st.count(suff)){
                ok=true;
                break;
            }
        }

        if(ok){
            ans += '1' ;
        }
        else ans += '0' ;

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