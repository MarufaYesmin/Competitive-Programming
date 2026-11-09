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
    ll n,m;
    cin>>n>>m;

    vector<ll> v(m);
    for(auto &a:v) cin>>a;

    sort(all(v));

    multiset<ll> gaps;

    gaps.insert(v[0]+n-v[m-1]-1);

    for(ll i=0;i<m-1;i++){
        gaps.insert(v[i+1]-v[i]-1);
    }

    ll days=0,saved=0;

    while(!gaps.empty()){
        auto it=prev(gaps.end());
        ll x=*it;
        gaps.erase(it);

        ll rem=x-2*days;

        if(rem<=0) continue;

        if(rem<=2){
            saved++;
            days++;
        }
        else{
            saved+=rem-1;
            days+=2;
        }
    }

    cout<<n-saved<<endl;
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