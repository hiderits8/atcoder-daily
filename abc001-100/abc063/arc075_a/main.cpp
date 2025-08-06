#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int MAX_SUM = 10000;

int main(void)
{
    int n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> s[i];
    }

    vector<vector<bool>> dp(n + 1, vector<bool>(MAX_SUM, false));
    dp[0][0] = true;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j <= MAX_SUM; ++j)
        {
            if (dp[i][j])
            {
                dp[i + 1][j] = true;
                dp[i + 1][j + s[i]] = true;
            }
        }
    }

    int ans = 0;

    for (int i = 0; i <= MAX_SUM; ++i)
    {
        if (i % 10 && dp[n][i])
        {
            ans = max(ans, i);
        }
    }

    cout << ans << endl;
    return 0;
}
