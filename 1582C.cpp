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
   ll n; cin>>n;
   string s; cin>>s;
   
   ll min_count=LLONG_MAX;

   for(char ch='a';ch<='z';ch++){

    ll left=0,right=n-1;

    ll current_count=0;
    bool isposible=true;

    while(left<right){

        if(s[left]==s[right]){
            left++;
            right--;
        }
        else if(s[left]==ch){
            current_count++;
            left++;
        }
        else if(s[right]==ch){
            current_count++;
            right--;
        }
        else{
            isposible=false;
            break;
        }

    }

    if(isposible){
        min_count=min(min_count,current_count);
    }

   }
   if(min_count != LLONG_MAX) cout<<min_count<<endl;
   else cout<<-1<<endl;
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