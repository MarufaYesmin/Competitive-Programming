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
    int n,k; cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    sort(arr,arr+n);
    
    int count=1,mx=1;
    for(int i=1;i<n;i++) {
        if(arr[i]-arr[i-1] <= k){
            count++;
        }
        else count =1;

        mx=max(count,mx);
    }
    cout<<n-mx<<'\n';
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