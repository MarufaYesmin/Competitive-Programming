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
    string s; cin>>s;

    ll n=s.length();

    ll lastDigit = s[n-1]-'0' ,swap_index=-1;
    for(ll i=0;i<n;i++){
        ll digit = s[i]-'0' ;

        if(digit%2==0){
            swap_index = i;

            if(digit < lastDigit) {
                 break;
            }
        }
    }

    if(swap_index == -1){
        cout<<-1<<endl;
    }
    else{
        swap(s[swap_index],s[n-1]);
        cout<<s<<endl;
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}