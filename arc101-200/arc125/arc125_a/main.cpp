#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void toggle(int &cur)
{
    if (cur == 1)
    {
        cur = 0;
    }
    else if (cur == 0)
    {
        cur = 1;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> s(n);
    for (int i = 0; i < n; ++i)
        cin >> s[i];
    vector<int> t(m);
    for (int i = 0; i < m; ++i)
        cin >> t[i];

    vector<vector<int>> pos(2);
    for (int i = 0; i < n; ++i)
    {
        pos[s[i]].push_back(i);
    }

    for (int tx : t)
    {
        if (pos[tx].empty())
        {
            cout << -1 << endl;
            return 0;
        }
    }

    int bestDist = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] != s[0])
        {
            bestDist = min(bestDist, i);
            break;
        }
    }
    for (int i = n - 1; i >= 0; --i)
    {
        if (s[i] != s[0])
        {
            bestDist = min(bestDist, n - i);
            break;
        }
    }

    int ans = 0, cur = s[0];
    bool shifted = false;

    for (int i = 0; i < m; ++i)
    {
        int need = t[i];

        if (cur != need)
        {
            if (!shifted)
            {
                ans += bestDist;
                shifted = true;
            }
            else
            {
                ans++;
            }
            toggle(cur);
        }
    }
    ans += m;
    cout << ans << endl;

    return 0;
}