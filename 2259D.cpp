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

    ll count0=0;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==0) count0++;
    }

    if(count0==1){
        no;
        return;
    }

    yes;
    
     if(count0==0){
        for(ll i=0;i<n;i++) cout<<'A';
        cout<<endl;
        return;
    }

    ll zero = 0;
    for(ll i=0; i<n; i++){
        if(v[i] == 0){
            if(zero == 0){
                cout <<'A'; 
                zero++;
            } 
            else {
                cout <<'B'; 
            }
        } 
        else {
            cout <<'C'; 
        }
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        abcd();
    }
    return 0;
}