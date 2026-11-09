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
    ll n,c0=0,c1=0; cin>>n;
    string s; cin>>s;

    for(ll i=0;i<n;i++){
        if(s[i]=='0') c0++;
    }
    c1=n-c0;

    if(c0%2==1){
        cout<<c0<<endl;
        for(ll i=0;i<n;i++){
            if(s[i]=='0') cout<<i+1<<' ';
        }
        cout<<endl;
    }
    else if(c1%2==0){
        cout<<c1<<endl;
        if(c1 !=0 ) 
        {
           for(ll i=0;i<n;i++){
              if(s[i]=='1') cout<<i+1<<' ';
           }
          cout<<endl;
        }
    }
    else cout<<"-1"<<endl;
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