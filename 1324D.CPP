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
    vector<ll> a(n),b(n);

    for(auto &p:a) cin>>p;
    for(auto &q:b) cin>>q;

    vector<ll> c(n);
    for(ll i=0;i<n;i++){
        c[i]=a[i]-b[i];
    }

    sort(all(c));

    ll i=0,j=n-1;
    ll ans=0;

    while(i<j){
        if(c[i]+c[j]>0){
            ans+=j-i;
            j--;
        }
        else{
            i++;
        }
    }
    cout<<ans<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
   abcd();
}