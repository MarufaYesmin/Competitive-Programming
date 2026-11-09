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

void abcd() {
    ll n;
    cin>>n;
    string s;
    cin>>s;

    ll count=0,mn=-1,mx=-1;

    for(ll i=0;i<n;i++){
        if(s[i]=='1'){
            count++;
            if(mn==-1) mn=i;
            mx=i;
        }
    }

    if(count==1) cout<<0<<endl;
    else if(count==2) cout<<1<<endl;
    else cout<<mx-mn<<endl;
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