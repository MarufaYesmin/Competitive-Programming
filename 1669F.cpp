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
    vector<ll> v(n);
    for(auto &a:v) cin>>a;

    ll left=0,right=n-1,left_sum=0,right_sum=0;
    ll ans=0;

    while(left<=right){
        if(left_sum<=right_sum){
            left_sum += v[left];
            left++;
        }
        else{
            right_sum += v[right];
            right--;
        }

        if(left_sum== right_sum){
            ans= max(ans,left+n-right-1);
        }
    }
    cout<<ans<<endl;
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