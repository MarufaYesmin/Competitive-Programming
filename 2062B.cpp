#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"

void abcd(){
    ll n; cin>>n;
    ll arr[n];
    
    bool possible = true; 

    for(ll i=0; i<n; i++) {
        cin >> arr[i];

        ll left = i;
        ll right = n - i - 1;

        if(left * 2 >= arr[i] || right * 2 >= arr[i]) {
            possible = false; 
        }
    } 

    if(possible) yes;
    else no;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        abcd();
    }
    return 0;
}