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
    ll n; cin >> n;
    string s; cin >> s;

    for(char i = 'a'; i <= 'z'; i++){
        if(s.find(i) == string::npos){
            cout << i << endl;
            return;
        }
    }

    for(char i = 'a'; i <= 'z'; i++){
        for(char j = 'a'; j <= 'z'; j++){
            string sub = "";
            sub += i;
            sub += j;
            if(s.find(sub) == string::npos){
                cout << sub << endl;
                return;
            }
        }
    }

    for(char i = 'a'; i <= 'z'; i++){
        for(char j = 'a'; j <= 'z'; j++){
            for(char k = 'a'; k <= 'z'; k++){
                string substr = "";
                substr += i;
                substr += j;
                substr += k;
                if(s.find(substr) == string::npos){
                    cout << substr << endl;
                    return;
                }
            }
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