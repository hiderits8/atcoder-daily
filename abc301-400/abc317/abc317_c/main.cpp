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
        int a, b;
        ll c;
        cin >> a >> b >> c;
        a--;
        b--;
        g[a].push_back({b, c});
        g[b].push_back({a, c});
    }

    ll ans = 0;

    function<void(int, int, ll)> dfs = [&](int p, int visited, ll w)
    {
        if (visited & (1 << p))
            return;
        visited |= 1 << p;
        ans = max(ans, w);

        for (auto [to, x] : g[p])
        {
            dfs(to, visited, w + x);
        }
    };

    rep(i, n)
    {
        dfs(i, 0, 0);
    }

    cout << ans << endl;
    return 0;
}
