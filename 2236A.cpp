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

void abcd()
{
    int n;  cin>>n;

    vector<ll> h(n);

    ll mx=0, mn=10;

    for(int i=0;i<n;i++)
    {
        cin>>h[i];
        mx=max(mx,h[i]);
        mn=min(mn,h[i]);
    }

    cout<<mx+1-mn<<endl;
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