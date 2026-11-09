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
    ll n,k; cin>>n>>k;
    string s; cin>>s;

    vector<ll> pre(n,0);

    if(s[0] =='1') pre[0]=1;

    for(ll i=1;i<n;i++){
        pre[i] = pre[i-1];
        if(s[i]=='1') pre[i] += 1;
    }

    ll cnt=0;

    for(ll i=0;i<n;i++){
       
        if(s[i]=='1'){ // si=1 abar dhorlam protected na akhon just thirt ta satisfy kora mane change kora jabe tai amra sheitake protected kobo must
            
            ll left_idx=max (0LL,i-k+1);

            ll num_one=0;

            if(i-1 >= left_idx) 
            {
                num_one = pre[i-1];
                if(left_idx>0) num_one-=pre[left_idx-1];
            }

            if(num_one==0) cnt++; 
        }
    }
    cout<<cnt<<endl;
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