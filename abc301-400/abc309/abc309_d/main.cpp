#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const int INF = 1e9;

int main(void)
{
    int n1, n2, m;
    cin >> n1 >> n2 >> m;
    int n = n1 + n2;
    vector<vector<int>> g(n);
    rep(i, m)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    auto bfs = [&](int x)
    {
        vector<int> dist(n1 + n2 + 1, INF);
        queue<int> q;
        q.push(x);
        dist[x] = 0;
        while (!q.empty())
        {
            int p = q.front();
            q.pop();
            for (int n : g[p])
            {
                if (dist[n] != INF)
                    continue;
                dist[n] = dist[p] + 1;
                q.push(n);
            }
        }
        return dist;
    };

    vector<int> d1, dt;
    d1 = bfs(0);
    dt = bfs(n1 + n2 - 1);

    int ans = 1;

    int df = 0;
    rep(i, n1) df = max(df, d1[i]);
    ans += df;

    int db = 0;
    rep(i, n2) db = max(db, dt[i + n1]);
    ans += db;

    cout << ans << endl;

    return 0;
}
