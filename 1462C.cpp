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
    if(n>45){
        cout<<-1<<endl;
        return;
    }

    string ans="";
    for(ll i=9;i>=1;i--){
        if(n>i){
            ans+=to_string(i);
            n-=i;
        }
        else if(n>0){
            ans+=to_string(n);
            n=0;
            break;
        }
    }
    reverse(all(ans));
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