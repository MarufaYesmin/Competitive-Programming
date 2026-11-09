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

ll lcm(ll a,ll b){
   // return (a*b)/__gcd(a,b); overflow
   return (a/__gcd(a,b))*b;
}

void abcd(){
    ll n,x,y; cin>>n>>x>>y;

    ll LCM=n/lcm(x,y);
    
    ll distinc_num_div_by_x=n/x - LCM;
    ll distinc_num_div_by_y=n/y - LCM;


    ll total_sum_of_x=(distinc_num_div_by_x*(2*n-distinc_num_div_by_x+1))/2;
    ll total_sum_of_y=(distinc_num_div_by_y*(distinc_num_div_by_y+1))/2;
     
    cout<<total_sum_of_x-total_sum_of_y<<endl;
    
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