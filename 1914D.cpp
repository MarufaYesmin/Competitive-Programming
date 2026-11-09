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

vector<pair<ll,ll>> calculate(vector<ll>& v, ll n){
    vector<pair<ll,ll>> x(n); // এখানে সাইজ n ডিফাইন করা হয়েছে
    for(ll i=0;i<n;i++){
        x[i].first = v[i];
        x[i].second = i;
    }
    sort(all(x), greater<pair<ll,ll>>());

    vector<pair<ll,ll>> y(3);
    for(ll i=0;i<3;i++){
        y[i] = x[i];
    }
    return y;
}

void abcd(){
    ll n; cin>>n;
    vector<ll> a(n),b(n),c(n);
    for(auto &p:a) cin>>p;
    for(auto &p:b) cin>>p;
    for(auto &p:c) cin>>p;

    vector<pair<ll,ll>> best_a=calculate(a,n);
    vector<pair<ll,ll>> best_b=calculate(b,n);
    vector<pair<ll,ll>> best_c=calculate(c,n);

    ll sum=0,ans=0;
    for(auto x:best_a){
        for(auto y:best_b){
            if(x.second==y.second) continue;
            for(auto z:best_c){
                if(x.second==z.second || y.second==z.second) continue;
                else{
                    sum=x.first+y.first+z.first;
                    ans=max(ans,sum);
                }
            }
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
    return 0;
}