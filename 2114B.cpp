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
    ll n,m; cin>>n>>m;
    string s; cin>>s;

    ll count1=0,count2=0;

    for(char c:s){
        if(c=='1') count1++;
        else count2++;
    }
    if(count1==n || count2==n){
          m==(n/2) ? yes:no;
          return;
    }

    ll max_good = (count1/2) + (count2/2);
    ll min_good = abs(count1-count2)/2;
    if(m>=min_good && m<=max_good && (m-min_good)%2==0) yes;
    else no;
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
