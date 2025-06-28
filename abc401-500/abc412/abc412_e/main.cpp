#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, h, m;
    cin >> n >> h >> m;
    vector<vector<pair<int, int>>> dp(n + 1);
    dp[0].emplace_back(h, m);

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        for (auto [hp, mp] : dp[i])
        {
            if (hp >= a)
            {
                dp[i + 1].emplace_back(hp - a, b);
            }

            if (mp >= b)
            {
                dp[i + 1].emplace_back(a, mp - b);
            }
        }

        if (dp[i + 1].size() == 0)
            break;
        ans++;
    }

    cout << ans << endl;

    return 0;
}