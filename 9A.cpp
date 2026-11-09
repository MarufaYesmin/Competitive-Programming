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

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

void abcd(){
int y, r;
    cin >> y >> r;

    int m = max(y, r);

    int a = 6 - m + 1; 
    int b = 6; 

    int g = gcd(a, b);

    cout << (a / g) << "/" << (b / g) << endl; 
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}