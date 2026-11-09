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
    vector<ll> v(n);
    for(auto &a:v) cin>>a;

    ll in_25=0,in_50=0;
    for(ll i=0;i<n;i++){
        if(v[i]==25){
           in_25++;
        }
        else if(v[i]==50 ){
            if(in_25>=1){
                in_25--;
                in_50++;
            }
            else{
                no; return;
            }
        }
        else{
            if(in_50>=1 && in_25>=1){
                in_50--;
                in_25--;
            }
            else if(in_25>=3){
                in_25-=3;
            }
            else{
                no; return;
            }
        }
    }
    yes;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}