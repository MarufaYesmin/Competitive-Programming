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

bool IsPalindrome(ll x){
    string s=to_string(x);
    string str=s;
    reverse(s.begin(),s.end());

    if(s==str) return true;
    else return false;
}

void abcd(){
    ll n; cin>>n;

    ll a,b;

    for(a=0;a<=n;a++){
        
        if(IsPalindrome(a)){
            b=n-a;
            if(b>=0 && b%12==0){
                cout<<a<<' '<<b<<endl;
                return;
            }
        }
        b+=12;
    }
    cout<<-1<<endl;
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