
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


void abcd() {
    ll n, k;
    cin >> n >> k;

    if((k==0 && n>1) || k>9*n){
        cout<<-1<<" "<<-1<<endl;
        return;
    }

    if (n==1) {
        cout<<k<<" "<<k<<endl;
        return;
    }

    string ch(n,'0');
    ll sum = k;

    for (ll i=0;i<n;i++) {
        ll d=min(9LL, sum);
        ch[i]=char('0'+d);
        sum-=d;
    }

    string mx=ch;

    reverse(ch.begin(),ch.end());

    if (ch[0]=='0') {
        ll i = 0;
        while (i<n && ch[i]=='0') i++;

        ch[i]--;
        ch[0]='1';
    }
    cout<<ch<<" "<<mx<<endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}