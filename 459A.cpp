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
    ll x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;

    if(x1==x2){
        ll l=abs(y1-y2);
        cout<<x1+l<<' '<<y1<<' '<<x2+l<<' '<<y2;
    }
    else if(y1==y2){
        ll l=abs(x1-x2);
        cout<<x1<<' '<<y1+l<<' '<<x2<<' '<<y2+l;
    }
    else if(abs(x1-x2)==abs(y1-y2)){
        cout<<x1<<' '<<y2<<' '<<x2<<' '<<y1;
    }
    else{
        cout<<-1;
    }
    cout<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}