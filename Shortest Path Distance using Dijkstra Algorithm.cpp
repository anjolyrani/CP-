#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<pair<int,int>>> g(n);
    for(int i=0;i<m;i++){
        int u,v,w;
        cin >> u >> v >> w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }

    int s;
    cin >> s;

    const long long INF = 1e18;
    vector<long long> dist(n, INF);
    dist[s] = 0;

    priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<pair<long long,int>>> pq;
    pq.push({0,s});

    while(!pq.empty()){
        auto [d,u] = pq.top();
        pq.pop();
        if(d != dist[u]) continue;
        for(auto &p : g[u]){
            int v = p.first, w = p.second;
            if(dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    for(int i=0;i<n;i++){
        if(dist[i] == INF) cout << -1;
        else cout << dist[i];
        if(i+1<n) cout << " ";
    }
    return 0;
}
