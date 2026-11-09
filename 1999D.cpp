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

    ll j=0;
    for(ll i=0;i<s1.size();i++){
        if(j<s2.size()){
            if(s1[i]=='?' || s1[i]==s2[j]){
                s1[i]=s2[j];
                j++;
            }
        }
        else{
            if(s1[i]=='?') s1[i]='a';
        }
    }
    if(j==s2.size()){
        yes;
        cout<<s1<<endl;
    }
    else no;
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