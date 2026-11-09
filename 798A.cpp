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

    ll n=s.length();

    ll mismatch=0;
    for(ll i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            mismatch++;
        }
    }

    if(mismatch == 1){
        yes;
    }
    else if(mismatch==0 && n%2!=0){
        yes;
    }
    else {
        no;
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}