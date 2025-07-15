#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> q(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> q[i].first >> q[i].second;
    }

    vector<set<int>> v;

    int k;
    cin >> k;

    vector<pair<int, int>> cd(k);
    for (int i = 0; i < k; ++i)
    {
        cin >> cd[i].first >> cd[i].second;
    }

    int ans = 0;

    for (int bit = 0; bit < (1 << k); ++bit)
    {
        vector<bool> has(n + 1, false);

        for (int i = 0; i < k; ++i)
        {
            if (bit & (1 << i))
            {
                has[cd[i].second] = true;
            }
            else
            {
                has[cd[i].first] = true;
            }
        }

        int count = 0;
        for (auto [a, b] : q)
        {
            if (has[a] && has[b])
                ++count;
        }

        ans = max(ans, count);
    }

    cout << ans << endl;
    return 0;
}
