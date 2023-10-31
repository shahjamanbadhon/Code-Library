#include<bits/stdc++.h>
using namespace std;
vector<int>vt[100];
int vis[100], dis[100], par[100];
int n;

void bfs(int st)
{
    queue<int>q;
    q.push(st);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        vis[u]=1;

        for(int i=0; i<vt[u].size(); i++)
        {
            int v = vt[u][i];
            if(vis[v]==0)
            {
                dis[v]=dis[u]+1;
                par[v] = u;
                q.push(v);
            }
        }
    }
}

int main()
{
    int a, b, x;
    cin>>n; //number of connection
    cin>>x; //source node
    for(int i=1; i<=n; i++)
    {
        cin>>a>>b;
        vt[a].push_back(b);
        vt[b].push_back(a);
    }

    bfs(1);

    for(int i=1;i<=n+1;i++)
    {
        cout<<i<< " distance : " <<dis[i]<<endl;
        cout<<i<< " parent : " <<par[i]<<endl;
    }
    return 0;
}
