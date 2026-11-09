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

void abcd() {
    int n;
    cin >> n;
    int sum_even = 0, sum_odd = 0;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 == 0) {
            sum_even += x;
        } else {
            sum_odd += x;
        }
    }
    
    if (sum_even > sum_odd) {
        yes;
    } else {
        no;
    }
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