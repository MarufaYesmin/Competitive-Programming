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

ll nCr(ll n,ll r) {
    if (r<0 || r>n) return 0;
    if (r==0 || r==n) return 1;
    ll res=1;
    for (ll i=1;i<=r;i++) {
        res=res*(n-i+1)/i;
    }
    return res;
}

void abcd(){
    string s1,s2; cin>>s1>>s2;
    double ans=0;

    ll p1=0,m1=0,p2=0,m2=0;

    for(ll i=0;i<s1.size();i++){
        if(s1[i]=='+') p1++;
        else m1++;

        if(s2[i]=='+') p2++;
        else if(s2[i]=='-') m2++;
    }

    if(p2>p1 || m2>m1){
        cout<<fixed<<setprecision(12)<<0.0<<endl;
    }
    else{
        ll need_plus=p1-p2;
        ll quesmark=s1.size()-(p2+m2);

        double ans=nCr(quesmark,need_plus)/pow(2,quesmark);
        cout<<fixed<<setprecision(12)<<ans<<endl;
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}