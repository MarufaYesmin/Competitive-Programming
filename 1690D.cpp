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
    ll n,k; cin>>n>>k;

    string s; cin>>s;

    ll cnt=0;
    for(ll i=0;i<k;i++){
        if(s[i]=='W') cnt++;
    }
    
    ll mn=cnt;

    ll l=0,r=k;

    while(r<n){
        if(s[r]=='W') cnt++;
        if(s[l]=='W') cnt--;

        mn=min(mn,cnt);

        l++; 
        r++;
    }
    cout<<mn<<endl;
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