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
    string s1,s2; cin>>s1>>s2;
    if(s1==s2){
        cout<<-1<<endl;
        return;
    }

    ll ans=max(s1.size(),s2.size());
    cout<<ans<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
   abcd();
}