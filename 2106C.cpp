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
    vector<ll> v1(n),v2(n);

    ll countMinusOne=0,sum=0;

    for(ll i=0;i<n;i++) cin>>v1[i];
    for(ll i=0;i<n;i++){
        cin>>v2[i];
        if(v2[i]== -1) countMinusOne++;
    }

    ll minimum=*min_element(v1.begin(),v1.end());
    ll maximum=*max_element(v1.begin(),v1.end());
    if(countMinusOne==n){
        cout<<(minimum+k-maximum)+1<<endl;
    }
    else{
        ll x=-1;
        ll ok=true;

        for(ll i=0;i<n;i++){
            if(v2[i] != -1){
                sum=v1[i]+v2[i];
                
                if(x==-1){
                    x=sum;
                }
                else if(x!=sum){
                    ok=false;
                    break;
                }
            }
        }

        
        if((x-minimum)>k || x<maximum || !ok) cout<<0<<endl;
        else cout<<1<<endl;
    }

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