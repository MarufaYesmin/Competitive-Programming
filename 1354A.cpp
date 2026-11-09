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
    ll a,b,c,d; cin>>a>>b>>c>>d;

    if(a<=b){ 
        cout<<b<<endl;
        return;
    }

    if(d>=c){
        cout<<-1<<endl;
        return;
    }

    ll sum=b;
    ll diff1=a-b;
    ll diff2=c-d;

    ll x=(diff1+diff2-1)/diff2;
    cout<<sum+c*x<<endl;
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