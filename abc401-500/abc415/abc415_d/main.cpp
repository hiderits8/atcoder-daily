#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> p(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> p[i].first >> p[i].second;
    }
    sort(p.begin(), p.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         { return a.first * b.second < a.second * b.first; });

    int ans = 0;
    bool ok = true;
    while (ok)
    {
        ok = false;
        for (auto &[a, b] : p)
        {
            if (a <= n)
            {
                n -= a;
                n += b;
                ans++;
                ok = true;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}