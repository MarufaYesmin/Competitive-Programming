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

void abcd()
{
    int n,m; cin>>n>>m;

    int sum=0,ans=0;

    for(int i=0;i<n;i++)
    {
        string s;  cin>>s;

        sum+=s.size();

        if(sum<=m)  ans++;
    }
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)  abcd();
}