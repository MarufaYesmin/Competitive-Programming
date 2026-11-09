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

    vector<ll> freq(26,0);

    for(char ch:s) freq[ch-'a']++;

    ll odd=0;

    for(ll i=0;i<26;i++){
        if(freq[i]%2==1) odd++;
    }

    if(odd==0 || odd%2==1) cout<<"First\n";
    else cout<<"Second\n";
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}