#include <bits/stdc++.h>
using namespace std;

// Using long long as per your preference
using ll = long long;

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl "\n"

void abcd() {
    ll n,count1=0,count2=0; 
    cin >> n;
    string str;
    cin >> str;

    for(ll i=0;i<n;i++){
        if(str[i]=='(') count1++;
        else count2++;
    }
    if(count1==count2) yes;
    else no;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    if (!(cin >> t)) return 0;
    while (t--) {
        abcd();
    }
    return 0;
}