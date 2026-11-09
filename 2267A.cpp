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
    char ch; cin>>ch;

    string s; cin>>s;

    ll left=0,right=n-1;
    ll count=0;

    while(left<right){
        if(s[left]!=s[right]){
            if(s[left]==ch || s[right]==ch){
                count++;
            }
            else count+=2;
        }
        left++;
        right--;
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