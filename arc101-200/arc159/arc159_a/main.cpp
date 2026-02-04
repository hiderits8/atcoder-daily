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
#include <climits>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<vector<int>> g(n);

    rep(i, n) rep(j, n)
    {
        int aij;
        cin >> aij;
        if (aij)
            g[i].push_back(j);
    }

    int q;
    cin >> q;
    while (q--)
    {
        ll s, t;
        cin >> s >> t;
        s--, t--;
        s %= n;
        t %= n;

        const int INF = 1e9;
        vector<int> dist((int)n, INF);
        queue<int> que;

        for (int nv : g[s])
        {
            if (dist[nv] > 1)
            {
                dist[nv] = 1;
                que.push(nv);
            }
        }

        while (!que.empty())
        {
            int v = que.front();
            que.pop();
            for (int nv : g[v])
            {
                if (dist[nv] != INF)
                    continue;
                dist[nv] = dist[v] + 1;
                que.push(nv);
            }
        }

        if (dist[t] == INF)
            cout << -1 << "\n";
        else
            cout << dist[t] << "\n";
    }

    return 0;
}