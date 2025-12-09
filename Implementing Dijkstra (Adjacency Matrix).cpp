#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, src;
    cin >> n >> src;

    vector<vector<long long>> adj(n, vector<long long>(n));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> adj[i][j];

    const long long INF = 1e18;
    vector<long long> dist(n, INF);
    vector<bool> used(n, false);
    dist[src] = 0;

    for(int i = 0; i < n; i++) {
        int u = -1;
        for(int v = 0; v < n; v++)
            if(!used[v] && (u == -1 || dist[v] < dist[u]))
                u = v;

        used[u] = true;

        for(int v = 0; v < n; v++)
            if(adj[u][v] != -1)
                dist[v] = min(dist[v], dist[u] + adj[u][v]);
    }

    for(long long x : dist) 
        cout << x << " ";
}
