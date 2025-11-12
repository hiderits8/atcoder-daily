#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n, x, y;
    cin >> n >> x >> y;
    x--;
    y--;
    vector<vector<int>> g(n);
    rep(i, n - 1)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<int> tmp;
    vector<int> ans;
    vector<bool> found(n, false);

    auto dfs = [&](auto &self, int p, int parent) -> void
    {
        tmp.push_back(p + 1);
        if (p == y)
        {
            ans = tmp;
            found[y] = true;
            tmp.pop_back();
            return;
        }
        for (auto next : g[p])
        {
            if (next == parent)
                continue;
            if (found[y])
                break;
            self(self, next, p);
        }
        tmp.pop_back();
    };

    dfs(dfs, x, -1);

    bool flg = false;
    for (auto a : ans)
    {
        if (flg)
            cout << " ";
        cout << a;
        flg = true;
    }
    cout << endl;
}
