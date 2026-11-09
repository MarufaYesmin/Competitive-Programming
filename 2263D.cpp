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
    ll n;  cin>>n;
    
    vector<ll> a(n+1);
    for(ll i=1;i<=n;i++)  cin>>a[i];

    vector<ll> diff(n+1,0);
    for(ll k=1; k<=n;k++){
        ll left=a[k]*k;
        ll right=(a[k]+1)*k-1;

        if(left<n){
            right=min(right,n-1);
            diff[left]++;
            if(right+1<n) diff[right+1]--;
        }
    }

    set<ll> b;
    ll cnt=0;
    for(ll i=0;i<n;i++){
        cnt += diff[i];
        if(cnt==0) b.insert(i);
    }

    cout<<b.size()<<endl;
    for(auto p:b){
        cout<< p<<' ';
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--){
        abcd();
    }
    return 0;
}