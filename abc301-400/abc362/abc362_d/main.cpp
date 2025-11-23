#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

struct Edge
{
    int to;
    ll cost;
    Edge(int to, ll cost) : to(to), cost(cost) {}
};

using P = pair<ll, int>;

int main(void)
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    rep(i, n) cin >> a[i];

    vector<vector<Edge>> G(n);
    vector<ll> dist(n, LLONG_MAX);

    rep(i, m)
    {
        int u, v;
        ll b;
        cin >> u >> v >> b;
        u--;
        v--;
        G[u].emplace_back(v, b);
        G[v].emplace_back(u, b);
    }

    dist[0] = a[0];
    priority_queue<P, vector<P>, greater<P>> q;
    q.push({a[0], 0});
    while (!q.empty())
    {
        P c = q.top();
        ll d = c.first;
        int idx = c.second;
        q.pop();
        if (d > dist[idx])
            continue;
        for (int i = 0; i < G[idx].size(); ++i)
        {
            int to = G[idx][i].to;
            int cost = G[idx][i].cost;
            if (d + cost + a[to] < dist[to])
            {
                dist[to] = d + cost + a[to];
                q.push({dist[to], to});
            }
        }
    }

    for (int i = 1; i < n; ++i)
    {
        cout << dist[i];
        if (i < n - 1)
            cout << " ";
    }
    cout << endl;

    return 0;
}
