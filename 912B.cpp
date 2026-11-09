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

ll makeAllOnes(ll bits){
    ll ans = 0;

    for(int i = 0; i < bits; i++){
        ans = ans * 2 + 1;
    }

    return ans;
}

void abcd(){
     ll n, k;
    cin >> n >> k;

    if(k == 1){
        cout << n << endl;
        return;
    }

    ll bit = 0, temp = n;
    if(temp == 0) bit = 1;
    else{
       while(temp){
          bit++; //counting the number of bits
          temp >>= 1;
    }
}

    cout << makeAllOnes(bit) << endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}