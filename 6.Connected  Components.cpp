#include <bits/stdc++.h>
using namespace std;
#define ll long long
void dfs(int node, vector<vector<int>> &adj, vector<int> &visited)
{

    visited[node] = 1;
    for (int other : adj[node])
    {

        if (visited[other] == 0)
        {

            dfs(other, adj, visited);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj(V);
        vector<int> visited(V, 0);
        for (int i = 0; i < E; i++)
        {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        int components = 0;
        for (int i = 0; i < V; i++)
        {
            if (visited[i] == 0)
            {
                components++;
                dfs(i, adj, visited);
            }
        }
        cout << components;
    }
}
