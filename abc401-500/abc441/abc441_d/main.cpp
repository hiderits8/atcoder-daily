#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <iomanip>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    int n, m, l;
    ll s, t;
    cin >> n >> m >> l >> s >> t;
    vector<vector<pair<int, ll>>> G(n);
    rep(i, m)
    {
        int u, v;
        ll c;
        cin >> u >> v >> c;
        u--, v--;
        G[u].emplace_back(v, c);
    }

    vector<vector<ll>> dp(n), next(n);
    dp[0].push_back(0);
    for (int step = 0; step < l; ++step)
    {
        for (int u = 0; u < n; ++u)
        {
            for (ll cost : dp[u])
            {
                for (auto &[to, c] : G[u])
                {
                    next[to].push_back(cost + c);
                }
            }
        }
        dp = next;
        next = vector<vector<ll>>(n);
    }

    vector<int> ans;
    for (int v = 0; v < n; ++v)
    {
        auto &costs = dp[v];
        sort(costs.begin(), costs.end());
        auto it = lower_bound(costs.begin(), costs.end(), s);
        if (it != costs.end() && *it <= t)
        {
            ans.push_back(v + 1);
        }
    }

    for (int v : ans)
    {
        cout << v << endl;
    }

    return 0;
}