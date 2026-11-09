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

    ll dis_prime_fec=0;
    ll total_prime=0;

    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            dis_prime_fec++;
        }
        while(n%i==0){
            n/=i;
            total_prime++;
        }
    }
    if(n>1){
        total_prime++;
        dis_prime_fec++;
    }
    cout<<total_prime+dis_prime_fec-1<<endl;
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