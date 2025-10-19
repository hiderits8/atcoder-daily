#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, ll>>> g(n);
    rep(i, m)
    {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        u--;
        v--;
        g[u].emplace_back(v, w);
        g[v].emplace_back(u, w);
    }

    ll ans = 2e18;
    auto dfs = [&](auto dfs, int v, vector<bool> visited, ll x)
    {
        visited[v] = true;
        if (v == n - 1)
        {
            ans = min(ans, x);
            return;
        }
        for (auto [to, w] : g[v])
        {
            if (visited[to])
                continue;
            dfs(dfs, to, visited, x ^ w);
        }
    };
    dfs(dfs, 0, vector<bool>(n), 0);

    cout << ans << endl;
    return 0;
}
