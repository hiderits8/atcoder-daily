#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, l;
    cin >> n >> l;

    if (l % 3 != 0)
    {
        cout << 0 << endl;
        return 0;
    }
    vector<int> point(n);
    vector<vector<int>> pos(l);
    point[0] = 0;
    pos[0].push_back(1);

    for (int i = 1; i < n; ++i)
    {
        int di;
        cin >> di;
        point[i] = (point[i - 1] + di) % l;
        pos[point[i]].push_back(i);
    }

    int r = l / 3;
    ll ans = 0;

    for (int i = 0; i < r; ++i)
    {
        if (!pos[i].empty() && !pos[i + r].empty() && !pos[i + 2 * r].empty())
        {
            ans += ((ll)pos[i].size() * (ll)pos[i + r].size() * (ll)pos[i + 2 * r].size());
        }
    }

    cout << ans << endl;

    return 0;
}