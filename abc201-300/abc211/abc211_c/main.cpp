#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

const ll C = 1e9 + 7;

int main(void)
{
    string s;
    cin >> s;
    int n = s.size();
    string t = "chokudai";

    vector<vector<ll>> dp(n + 1, vector<ll>(9, 0));
    for (int i = 0; i <= n; ++i)
        dp[i][0] = 1;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= 8; ++j)
        {
            if (s[i - 1] != t[j - 1])
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % C;
            }
        }
    }

    cout << dp[n][8] << endl;
    return 0;
}
