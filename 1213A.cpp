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
    ll n,odd=0; cin>>n;
    vector<ll> v(n);
    for(auto &a:v){
         cin>>a;
         if(a%2==1) odd++;
    }
    cout<<min(odd,n-odd)<<endl;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}