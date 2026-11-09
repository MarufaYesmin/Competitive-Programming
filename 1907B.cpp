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
    
    string ans="";
    ll countb=0,countB=0;
    for(ll i=s.length()-1;i>=0;i--){
        if(s[i]>='a' && s[i]<='z'){
            if(s[i]=='b') countb++;
            else if(countb>0){
                countb--;
            }
            else{
                ans+=s[i];
            }
        }
        else if(s[i]>='A' && s[i]<='Z'){
            if(s[i]=='B') countB++;
            else if(countB>0){
                countB--;
            }
            else{
                ans+=s[i];
            }
        }
    }

    reverse(ans.begin(),ans.end());
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