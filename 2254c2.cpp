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
    string a,b; cin>>a>>b;
    
    vector<ll> evenA,evenB,oddA,oddB;

    for(ll i=0;i<n;i++){
        if(a[i]=='1'){
            if(i%2==0) evenA.push_back(i);
            else oddA.push_back(i);
        }   
    }
    for(ll i=0;i<n;i++){
        if(b[i]=='1'){
            if(i%2==0) evenB.push_back(i);
            else oddB.push_back(i);
        }   
    }
    if(evenA.size()!=evenB.size() || oddA.size()!=oddB.size()){
        cout<<-1<<endl;
        return;
    }

    ll countEven=0,countOdd=0;
    for(ll i=0;i<evenA.size();i++){
        countEven +=(abs(evenA[i]-evenB[i]))/2;
    }
    for(ll i=0;i<oddA.size();i++){
        countOdd +=(abs(oddA[i]-oddB[i]))/2;
    }
    cout<<countEven+countOdd<<endl;
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