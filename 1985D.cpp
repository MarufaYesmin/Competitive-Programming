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
    int n,m;
    cin>>n>>m;

    vector<string> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int top=-1,bottom=-1,col=-1;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='#'){
                if(top==-1){
                    top=i;
                    col=j;
                }
                bottom=i;
            }
        }
    }

    int row=(top+bottom)/2;

    cout<<row+1<<" "<<col+1<<endl;
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