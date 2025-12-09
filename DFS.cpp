#include<bits/stdc++.h>
using  namespace  std;
typedef long long int ll;
typedef unsigned long long int  llu;
int vis[1000];
vector<int>v[10000];
void dfs(int node)
{
    vis[node]=1;
    cout<<node<<"->";
    for(int child: v[node])
    {
        if(vis[child]==0)
        {
            dfs(child);
        }
    }
}
int main()
{
    int n,m,i;
    cin>>n>>m;
    int x,y;
    while(m--)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            dfs(i);
        }
        cout<<endl;
    }
    return 0;
}
