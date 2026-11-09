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
    ll n,d; cin>>n>>d;
    vector<pair<ll,ll>> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }

    sort(v.begin(),v.end());

    ll ans=0,left=0,result=0;
    for(ll right=0;right<n && left<n;right++){

        ans+=v[right].second;

        while(v[right].first-v[left].first >= d){ //left one indx chnge houar poro satisfy na o hote pare tai jtkkhn na satisfy korse ttkhn left indx slide korte hbe
            ans-=v[left].second;
            left++;
        }

        result=max(result,ans);
    }
    cout<<result<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}