
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
    vector<string> s(8);

    for(ll i=0;i<8;i++){
        cin>>s[i];
    }

    for(ll i=1;i<7;i++){
        for(ll j=1;j<7;j++){
            if(s[i][j]=='#' &&
               s[i-1][j-1]=='#' && s[i-1][j+1]=='#' && s[i+1][j-1]=='#' && s[i+1][j+1]=='#'){
                cout<<i+1<<" "<<j+1<<endl;
                return;
            }
        }
    }
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
