#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    vector<pair<bool, ll>> c(n);

    rep(i, n) cin >> c[i].first >> c[i].second;

    vector<vector<ll>> dp(n + 1, vector<ll>(2, -(1LL << 60)));
    dp[0][0] = 0;

    rep(i, n)
    {
        dp[i + 1][0] = max(dp[i + 1][0], dp[i][0]);
        dp[i + 1][1] = max(dp[i + 1][1], dp[i][1]);

        ll y = c[i].second;
        if (!c[i].first)
        {
            dp[i + 1][0] = max(dp[i + 1][0], dp[i][0] + y);
            dp[i + 1][0] = max(dp[i + 1][0], dp[i][1] + y);
        }
        else
        {
            dp[i + 1][1] = max(dp[i + 1][1], dp[i][0] + y);
        }
    }

    cout << max(dp[n][0], dp[n][1]) << endl;

    return 0;
}
