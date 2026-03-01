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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> G(n);
    rep(i, m)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for (int v = 0; v < n; v++)
    {
        if ((int)G[v].size() > 2)
        {
            cout << "No\n";
            return 0;
        }
    }

    vector<bool> visited(n, false);
    vector<int> parent(n, -1);
    rep(i, n)
    {
        if (visited[i])
            continue;

        queue<int> q;
        q.push(i);
        visited[i] = true;
        while (!q.empty())
        {
            int v = q.front();
            q.pop();
            for (int nv : G[v])
            {
                if (!visited[nv])
                {
                    visited[nv] = true;
                    parent[nv] = v;
                    q.push(nv);
                }
                else if (nv != parent[v])
                {
                    cout << "No\n";
                    return 0;
                }
            }
        }
    }
    cout << "Yes\n";

    return 0;
}