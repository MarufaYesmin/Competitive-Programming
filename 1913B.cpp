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
    ll count1=0,count0=0 , n=s.length();
    for(ll i=0;i<n;i++){
        s[i]=='0'? count0++ : count1++;
    }
    ll i=0;
    for(;i<n;i++){
        if(s[i]=='0'){
            if(count1==0) break;
            count1--;
        }
        else{
            if(count0==0) break;
            count0--;
        }
    }
    cout<<n-i<<endl;
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