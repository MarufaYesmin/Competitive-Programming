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

bool isTrue(string str1,string str2,ll need){
    ll count0=0,count1=0,n=str1.length();
    for(ll i=0;i<n;i++){
        if(i%2==0 ){
           if(str1[i]=='0')  count0++;
        }
        else{
           if(str2[i]=='0')  count0++;
        }
    }
    if(count0 >= need) return true;
    else return false;
}

void abcd(){
    ll n; cin>>n;
    string s1,s2; cin>>s1>>s2;
    
    if(isTrue(s1,s2,(n+1)/2) && isTrue(s2,s1,n/2)) yes;
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