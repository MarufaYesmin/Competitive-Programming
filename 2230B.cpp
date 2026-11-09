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
    string s; cin>>s;

    ll count2=0,count4=0;

    for(ll i=0;i<s.length();i++){
        if(s[i]=='2') count2++;
        if(s[i]=='4') count4++;
    }

    ll onethree=0,two=count2,bad=0;

    ll ans=LONG_MAX;

    for(auto a:s){
        bad=onethree+two;
        ans = min(ans, bad);

        if(a=='1' || a=='3') onethree++;
        else if(a=='2') two--;
    }
    bad=onethree+two;
    ans = min(ans, bad);

    cout<<ans+count4<<endl;

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