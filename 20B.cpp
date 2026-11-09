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
    double a,b,c; cin>>a>>b>>c;

    cout<<fixed<<setprecision(10);

    if(a==0){
       if(b==0){
           if(c==0) cout<<-1<<endl;
           else cout<<0<<endl;
       }
       else{
        cout<<1<<endl;
        cout<<(-c/b)<<endl;
       }
        return;
    }

    double d=(b*b) - (4*a*c) ;

    double x1,x2;

    if(d<0){
        cout<<0<<endl;
    }
    else if(d==0){
        cout<<1<<endl<< -b/(2*a) <<endl;
    }
    else{
        x1 = ( -b + sqrt(d))/(2*a);
        x2 = ( -b - sqrt(d))/(2*a);

        if(x2<x1) swap(x1,x2);

        cout<<2<<endl;
        cout<<x1<<endl<<x2<<endl;
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}