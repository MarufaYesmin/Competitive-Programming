
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

vector<string> substr={"00","25","75","50"};

int calculate(string s,int k){
    int n=s.size();

    for(int i=n-1;i>=0;i--){
        if(s[i]==substr[k][1]){
            for(int j=i-1;j>=0;j--){
                if(s[j]==substr[k][0]){
                    return n-j-2;
                }
            }
        }
    }

    return INT_MAX;
}

void abcd(){
    string s;
    cin>>s;

    int mx=INT_MAX;

    for(ll i=0;i<4;i++){
        mx=min(mx,calculate(s,i));
    }

    cout<<mx<<endl;
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
