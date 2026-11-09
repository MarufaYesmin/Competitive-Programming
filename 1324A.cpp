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

    vector<int> a(n);
    for (int &x:a) cin>>x;

    int p = a[0]%2;

    for (int i=1;i<n;i++) {
        if (a[i]%2!=p) {
            no;   return;
        }
    }
yes;
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