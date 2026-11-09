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
    int n;
    cin>>n;
    string s1,s2; cin>>s1>>s2;
    int count=0;
    for(int i=0;i<n;){
        if(s1[i]!=s2[i]){
            if(i+1<n && s1[i]==s1[i+1] && s2[i]==s2[i+1]){
                i+=2;
            }
            else{
                count++;
                i++;
            }
        }
        else i++;
    }
    cout<<count<<'\n';
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