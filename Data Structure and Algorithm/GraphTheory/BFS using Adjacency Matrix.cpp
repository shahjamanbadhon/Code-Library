#include<bits/stdc++.h>
using namespace std;

const int N = 1010;

int adj[N][N];
int dist[N];
int vis[N];
int n;

void bfs(int src)
{
    vis[src]=1;
	dist[src] = 0;

	queue<int>q;
	q.push(src);

	while (!q.empty())
	{
		int cur = q.front();
		q.pop();

		for (int i = 1; i <= n; i++)
		{
			if (i == cur)continue;

			if (adj[cur][i] == 1 && vis[i] == 0)
			{
				q.push(i);
				vis[i] = 1;
				dist[i] = dist[cur] + 1;

			}
		}
	}
}

int main()
{
	int m, src;
	int u, v;

	cin >> n >> m >> src;

	for (int i = 1; i <= m; i++)
	{
		cin >> u >> v;

		adj[u][v] = 1;
		adj[v][u] = 1;
	}

	bfs(src);

	for (int i = 1; i <= n; i++)
		cout << "distance of " << i << " from source is " << dist[i] << endl;

	return 0;
}
