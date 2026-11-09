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
    int arr[3],count=0;
    for(int i=0;i<3;i++) cin>>arr[i];

    int mx = *max_element(arr,arr+3);

    for(int i=0;i<3;i++){
        if(arr[i]==mx) count++;
    }
    
    if(count>1) cout<<mx+1-arr[0]<<' '<<mx+1-arr[1]<<' '<<mx+1-arr[2]<<endl;
    else{
        for(int i=0;i<3;i++){
            if(arr[i]==mx) cout<<0<<' ';
            else cout<<mx+1-arr[i]<<' ';
        }
        cout<<endl;
    }

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