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
    ll n,c1=0,c2=0,c3=0; cin>>n;
    vector<ll> v(n);
    for(auto &a:v){
        cin>>a;
    }
    ll num1=0,num2=0,num3=0,first=0,i=0;
    for(;i<n;i++){
        if(v[i]==2) num2++;
        else if(v[i]==3) num3++;
        else num1++;
        if(num1>=(num2+num3)){
                first=i+1;
                break;  
            }
    }ll j=i,second=0; num1=0,num2=0,num3=0;
    for(;j<n;j++){
        if(v[j]==2) num2++;
        else if(v[j]==3) num3++;
        else num1++;
        if((num1+num2)>=num3){
                second=j-i+2;
                break;  
            }
    }
    ll thirt=n-first-second+1;
    if(first>0 && second>0 && thirt>0) yes;
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
}