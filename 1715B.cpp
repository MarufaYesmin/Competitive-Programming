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
    ll n,k,b,s; cin>>n>>k>>b>>s;

    vector<ll> v(n,0);
    ll x=k*b;

    ll mx=b*k + n*(k-1);

    if(x>s || s>mx){
        cout<<-1<<endl;
        return;
    }
    v[0]=x;
    x=s-x;

     ll add = min(x, k-1);
    v[0] += add;
    x -= add;

    ll i=1;
    while(i<n && x>0){
        if(x>=k-1){
            v[i]=k-1;
            x-=k-1;
        } 
        else{
            v[i]=x;
            x=0;
        }
        i++;
    }

    for(auto &a:v) cout<<a<<' ';
    cout<<endl;
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