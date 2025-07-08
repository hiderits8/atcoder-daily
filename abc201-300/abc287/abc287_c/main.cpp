#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);

    if (n != m + 1)
    {
        cout << "No" << endl;
        return 0;
    }

    while (m--)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<bool> seen(n, false);
    vector<int> next;
    next.push_back(0);

    while (!next.empty())
    {
        int cur = next.back();
        next.pop_back();

        if (seen[cur])
        {
            cout << "No" << endl;
            return 0;
        }

        if (g[cur].size() > 2)
        {
            cout << "No" << endl;
            return 0;
        }

        for (auto n : g[cur])
        {
            if (!seen[n])
            {
                next.push_back(n);
            }
        }
        seen[cur] = true;
    }

    for (auto s : seen)
    {
        if (!s)
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
