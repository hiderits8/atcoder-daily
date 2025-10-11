#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n, m, x;
    cin >> n >> m >> x;

    vector<int> cost(n);
    vector<vector<int>> effect(n, vector<int>(m));

    rep(i, n)
    {
        cin >> cost[i];
        rep(j, m) cin >> effect[i][j];
    }

    vector<int> sum(m, 0);
    rep(i, m)
    {
        rep(j, n)
        {
            sum[i] += effect[j][i];
        }
        if (sum[i] < x)
        {
            cout << -1 << endl;
            return 0;
        }
    }

    int ans = 0;
    rep(i, n)
    {
        ans += cost[i];
    }

    for (int i = 1; i < (1 << n); ++i)
    {
        vector<int> s(m, 0);
        int tmp = 0;
        for (int j = 0; j < n; ++j)
        {
            if (i & (1 << j))
            {
                for (int k = 0; k < m; ++k)
                {
                    s[k] += effect[j][k];
                }
                tmp += cost[j];
            }
        }
        bool ok = true;
        for (int j = 0; j < m; ++j)
        {
            if (s[j] < x)
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            ans = min(ans, tmp);
        }
    }

    cout << ans << endl;

    return 0;
}
