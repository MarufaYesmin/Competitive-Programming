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
    ll n , k ; cin>>n>>k;
    string s; cin>>s;

    vector<ll> capital(26,0);
    vector<ll> small(26,0);

    for(ll i=0;i<n;i++){
        if(s[i]>='a' && s[i]<='z'){
            small[s[i]-'a']++;
        }
        else{
            capital[s[i]-'A']++;
        }
    }

    ll ans=0;
    for(ll i=0;i<26;i++){
        ans += min(capital[i],small[i]);
        ll diff = abs(capital[i]-small[i])/2;

        if(diff < k){
            ans += diff ;
            k -= diff ;
        }
        else{
           ans += k;
           k=0; 
        }
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