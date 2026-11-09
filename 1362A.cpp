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
    ll a,b; cin>>a>>b;

    if(b>a) swap(a,b);

    ll count=0;
    if(a%b!=0){
        cout<<-1<<endl;
        return;
    }

    ll x=a/b;
    while(x>1){
       if(x%8==0) x/=8;
       else if(x%4==0) x/=4;
       else if(x%2==0) x/=2;
       else{
           cout<<-1<<endl;
           return;
       }
       count++;
    }
    cout<<count<<endl;
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