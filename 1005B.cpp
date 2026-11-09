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

    ll n1=s1.size(),n2=s2.size();
    ll count=0;
    for(ll i=n1-1,j=n2-1;i>=0 && j>=0;i--,j--){
        if(s1[i] != s2[j]){
            break;
        }
        count+=2;
    }
    cout<<n1+n2-count<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}