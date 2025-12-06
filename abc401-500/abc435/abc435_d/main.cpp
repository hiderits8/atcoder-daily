#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> GR(n);
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        GR[y].push_back(x);
    }

    int q;
    cin >> q;
    vector<bool> visited(n, false);
    vector<int> next;
    while (q--)
    {
        int type, v;
        cin >> type >> v;
        v--;
        if (type == 1)
        {
            if (visited[v])
                continue;

            next.push_back(v);
            while (!next.empty())
            {
                int cur = next.back();
                next.pop_back();
                visited[cur] = true;
                for (auto p : GR[cur])
                {
                    if (visited[p])
                        continue;
                    next.push_back(p);
                }
            }
        }
        else
        {
            cout << (visited[v] ? "Yes" : "No") << endl;
        }
    }

    return 0;
}