#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> e(m);
    rep(i, m)
    {
        cin >> e[i].first >> e[i].second;
        e[i].first--;
        e[i].second--;
    }
    int ans = m;

    for (int bit = 0; bit < (1 << n); bit++)
    {
        int tmp = 0;
        for (auto [u, v] : e)
        {
            if (((bit >> u) & 1) == ((bit >> v) & 1))
            {
                tmp++;
            }
        }
        ans = min(ans, tmp);
    }

    cout << ans << endl;
    return 0;
}