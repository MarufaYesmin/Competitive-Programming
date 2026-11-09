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
    ll n; 
    cin >> n;

    string s; 
    cin >> s;

    ll count0 = 0, ans = 0;
    bool first_conti_zero = true;

    for(ll i = 0; i < n; i++){
        if(s[i] == '1'){
            ans++;

            if(count0 > 0){
                if(first_conti_zero) {
                    ans += (count0 + 1) / 3;
                }
                else {
                    ans += count0 / 3;
                }
            }
            count0 = 0;
            first_conti_zero = false;
        }
        else {
            count0++;
        }
    }

    if(count0 > 0){
        if(first_conti_zero){
            ans += (count0 + 2) / 3;
        } 
        else {
            ans += (count0 + 1) / 3;
        }
    }

    cout << ans << endl;
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