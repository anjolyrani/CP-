#include <bits/stdc++.h>
using namespace std;

vector<int> g[100005];
bool vis[100005];

void dfs(int u){
    vis[u] = true;
    for(int v : g[u])
        if(!vis[v]) dfs(v);
}

int main(){
    int n, m;
    cin >> n >> m;
    while(m--){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++)
        if(!vis[i]) cnt++, dfs(i);
    cout << cnt;
}
