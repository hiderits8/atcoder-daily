#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> mp(n);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        mp[i] = {a, b};
    }

    vector<pair<int, int>> cp(m);
    for (int i = 0; i < m; i++)
    {
        int c, d;
        cin >> c >> d;
        cp[i] = {c, d};
    }

    for (auto p : mp)
    {
        int px = p.first, py = p.second;
        int min_dist = 1000000000;
        int ans = -1;
        for (int i = 0; i < cp.size(); ++i)
        {
            int cx = cp[i].first, cy = cp[i].second;
            int dist = abs(px - cx) + abs(py - cy);
            if (dist < min_dist)
            {
                min_dist = dist;
                ans = i + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}