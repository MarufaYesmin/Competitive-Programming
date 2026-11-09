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

bool isPalindrome(string &s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}

void abcd(){
    ll n; cin >> n;
    string s; cin >> s;

    ll zero_cnt = 0;
    for(char c : s){
        if(c == '0') zero_cnt++;
    }
    
    if(isPalindrome(s)) {
        if(zero_cnt % 2 == 1 && zero_cnt > 1){
            cout << "ALICE" << endl;
        }
        else {
            cout << "BOB" << endl;
        }
    }
    else {
        if(zero_cnt == 2 && n % 2 == 1 && s[n / 2] == '0'){
            cout << "DRAW" << endl;
        }
        else {
            cout << "ALICE" << endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        abcd();
    }
    return 0;
}