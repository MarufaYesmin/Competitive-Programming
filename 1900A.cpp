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

    ll total_dots = 0;
    ll con_dot=0;
    bool found_three = false;

    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            total_dots++;     
            con_dot++; 
            if (con_dot>= 3)  found_three = true;
        } 
        else  con_dot = 0; 
    }
    if (found_three) {
        cout << 2 << endl;
    } else {
        cout << total_dots << endl;
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