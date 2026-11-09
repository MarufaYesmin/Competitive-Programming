#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int fe;
    cin >> fe;

    while(fe--){
        int n; cin >> n;
        string s; cin >> s;

        string st = ""; 

        for(int i = 0; i < n; i++){
            if(!st.empty() && st.back() == s[i]){
                st.pop_back();
            } else {
                st.push_back(s[i]);
            }
        }

        if(st.empty()) cout<<"YES\n";
        else cout<<"NO\n";
    }
}