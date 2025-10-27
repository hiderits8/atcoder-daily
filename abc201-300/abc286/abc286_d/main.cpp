#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n, x;
    int a[50], b[50];
    bool dp[51][10001];

    cin >> n >> x;
    rep(i, n) cin >> a[i] >> b[i];

    for (int i = 0; i <= n; ++i)
    {
        for (int j = 0; j <= x; ++j)
        {
            dp[i][j] = false;
        }
    }
    dp[0][0] = true;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j <= x; ++j)
        {
            for (int k = 0; k <= b[i]; ++k)
            {
                if (j >= a[i] * k)
                {
                    if (dp[i][j - a[i] * k])
                        dp[i + 1][j] = true;
                }
            }
        }
    }

    if (dp[n][x])
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }

    return 0;
}
