#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
vector<pii> g[100005];
int dista[100005];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
    }
    int s;
    cin >> s;
    for (int i = 0; i < n; i++)
        dista[i] = INT_MAX;
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    dista[s] = 0;
    pq.push({0, s});

    while (!pq.empty())
    {
        int node = pq.top().second;
        int d = pq.top().first;
        pq.pop();
        if (d > dista[node])
            continue;
        for (auto child : g[node])
        {
            int adjNode = child.first;
            int weight = child.second;

            if (d + weight < dista[adjNode])
            {
                dista[adjNode] = d + weight;
                pq.push({dista[adjNode], adjNode});
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (dista[i] == INT_MAX)
            cout << -1 << " ";
        else
            cout << dista[i] << " ";
    }
}
