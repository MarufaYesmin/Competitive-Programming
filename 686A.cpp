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
    ll n,x; cin>>n>>x;

    ll dist=0;
    while (n--) {
        char op; ll d;
        cin>>op>>d;
        if (op=='+') {
            x+=d;
        } else {
            if (x >= d) x -= d;
            else  dist++;
        }
    }
    cout<<x<<" "<<dist<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
        abcd();
    
}