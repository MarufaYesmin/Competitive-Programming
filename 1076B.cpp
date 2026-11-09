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
   
   vector<ll> Seive(n+1,true);
   vector<ll> primes;
    
   Seive[0]=false;
   Seive[1]=false;

   for(ll i=2;i*i<n;i++){
    if(Seive[i]){
        for(ll j=i*2;j<=n;j+=i){
            Seive[j]=false;
        }
    }
   }

   for(ll i=2;i<=n;i++){
    if(Seive[i]){
        primes.push_back(i);
    }
   }

   ll count=0;
   ll temp=n;

    for(ll i=0;i<primes.size();i++){
        if(temp%primes[i]==0){
            count++;
            temp/=primes[i];
        }
    }

    if(temp>1) count++;
   
    cout<<count<<endl;

}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}