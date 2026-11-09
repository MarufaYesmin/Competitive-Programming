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
    ll n,p; cin>>n>>p;
    vector<ll> a(n),b(n);
    vector<pair<ll,ll>> x(n);

    for(auto &p:a) cin>>p;
    for(auto &p:b) cin>>p;

    for(ll i=0;i<n;i++){
        x[i].first=b[i];
        x[i].second=a[i];
    }

    sort(x.begin(),x.end());

    ll ans=p,total_people=n-1;
    for(ll i=0;i<n;i++){
        if(total_people<=0) break;
        if(x[i].first<p){
            ll take=min(total_people,x[i].second);
            ans+=x[i].first*take;
            total_people-=take;
        }
        else{
             ans+=p;
            total_people-=1;
        }
    }
    cout<<ans<<endl;
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