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
    ll a,b,c;
    cin>>a>>b>>c;

    ll new_a = 2*b - c;
    ll new_b = a + c;
    ll new_c = 2*b - a;

    if(new_a > 0 && new_a % a == 0){
        yes; return;
    }

    if(new_c > 0 && new_c % c == 0){
        yes; return;
    }

    if(new_b % 2 == 0){
        new_b /= 2;
        if(new_b > 0 && new_b % b == 0){
            yes;
            return;
        }
    }
    no;
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