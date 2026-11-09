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

bool isValid(ll n){
    ll temp=n;
    while(temp){
        ll rem=temp%10;
        if(rem!=0 && n%rem!=0){
            return false;
        }
        temp/=10;
    }
    return true;
}

void abcd(){
    ll n; cin>>n;

    while(!isValid(n)){
        n++;
    }
    cout<<n<<endl;
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