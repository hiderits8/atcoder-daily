#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    vector<vector<ll>> dp(n + 1, vector<ll>(10, 0));

    for (int i = 1; i <= 9; ++i)
    {
        dp[1][i] = 1;
    }

    for (int i = 1; i < n; ++i)
    {
        for (int j = 1; j <= 9; ++j)
        {
            if (j == 1)
            {
                dp[i + 1][j] = (dp[i][j] + dp[i][j + 1]) % 998244353;
            }
            else if (j == 9)
            {
                dp[i + 1][j] = (dp[i][j - 1] + dp[i][j]) % 998244353;
            }
            else
            {
                dp[i + 1][j] = (dp[i][j - 1] + dp[i][j] + dp[i][j + 1]) % 998244353;
            }
        }
    }

    ll sum = 0;
    for (int i = 1; i <= 9; ++i)
    {
        sum += dp[n][i] % 998244353;
    }

    cout << sum % 998244353 << endl;

    return 0;
}
