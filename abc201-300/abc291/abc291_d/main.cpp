#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <iomanip>
#include <climits>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
const ll mod = 998244353;

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    rep(i, n) cin >> a[i] >> b[i];
    vector<vector<ll>> dp(2, vector<ll>(n, 0));
    dp[0][0] = 1;
    dp[1][0] = 1;
    for (int i = 1; i < n; i++)
    {
        // 表
        if (a[i] != a[i - 1])
        {
            dp[0][i] += dp[0][i - 1];
        }
        if (a[i] != b[i - 1])
        {
            dp[0][i] += dp[1][i - 1];
        }

        // 裏
        if (b[i] != b[i - 1])
        {
            dp[1][i] += dp[1][i - 1];
        }
        if (b[i] != a[i - 1])
        {
            dp[1][i] += dp[0][i - 1];
        }
        dp[0][i] %= mod;
        dp[1][i] %= mod;
    }
    cout << (dp[0][n - 1] + dp[1][n - 1]) % mod << endl;
    return 0;
}