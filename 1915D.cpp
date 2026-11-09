#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl "\n"

bool vowel(char c){
    return c == 'a' || c == 'e';
}

void abcd(){
    ll n; cin >> n;
    string s; cin >> s;

    string result = "";
    while(!s.empty()){
        ll x;
        if(s.back()=='a' || s.back()=='e') x=2;
        else x=3;

        while(x--){
            result += s.back() ;
            s.pop_back();
        }
        result += '.' ;
    }
    result.pop_back();
    reverse(result.begin(),result.end());
    cout << result << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while(t--){
        abcd();
    }
}