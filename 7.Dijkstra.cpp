#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

vector<pii> g[100005];
int dista[100005];
int vis[100005];

int main()
{
    int V, E;
    cin >> V >> E;

    for (int i = 0; i < E; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }

    int src;
    cin >> src;

    for (int i = 0; i < V; i++)
    {
        dista[i] = INT_MAX;
        vis[i] = 0;
    }

    priority_queue<pii, vector<pii>, greater<pii>> pq;

    dista[src] = 0;
    pq.push({0, src});

    while (!pq.empty())
    {
        int node = pq.top().second;
        pq.pop();

        if (vis[node])
            continue;
        vis[node] = 1;

        for (auto child : g[node])
        {
            int adjNode = child.first;
            int weight = child.second;

            if (dista[node] + weight < dista[adjNode])
            {
                dista[adjNode] = dista[node] + weight;
                pq.push({dista[adjNode], adjNode});
            }
        }
    }

    for (int i = 0; i < V; i++)
    {
        cout << dista[i] << " ";
    }
}
