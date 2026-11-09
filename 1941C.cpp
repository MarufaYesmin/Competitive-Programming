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
    string s; cin>>s;

    ll count=0,i=0;
    while(i<n){
        if(i+4<n && s[i]=='m' && s[i+1]=='a' && s[i+2]=='p' && s[i+3]=='i' && s[i+4]=='e'){
            count++;
            i+=5;
        }
        else if((s[i]=='p' && s[i+1]=='i' && s[i+2]=='e') || (s[i]=='m' && s[i+1]=='a' && s[i+2]=='p')){
            count++;
            i+=3;
        }
        else{
            i++;
        }
    }
    cout<<count<<endl;
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