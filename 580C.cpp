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
const int N = 1e5 + 10;
vector<int> graph[N];
int cat[N];
bool vis[N];
int n, m, ans = 0;

void dfs(int vertex, int cnt){

    if(cat[vertex] == 1) cnt++;
    else cnt = 0;

    if(cnt>m) return;

    vis[vertex] = true;

    bool isleaf = true;

    for(int child : graph[vertex]){
        if(!vis[child]){           
            isleaf = false;
            dfs(child, cnt);
        }
    }
    if(isleaf) ans++;              
}

void abcd(){
    cin>>n>>m;

    for(int i=1;i<=n;i++) cin>>cat[i];

    for(int i=0;i<n-1;i++){
        int x,y; cin>>x>>y;

        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    dfs(1,0);

    cout<<ans;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    abcd();
}