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
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
const ll MOD = 998244353;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    vector<vector<ll>> dp(n, vector<ll>(10, 0));
    dp[0][a[0]] = 1;
    rep(i, n - 1)
    {
        rep(j, 10)
        {
            int f = (j + a[i + 1]) % 10;
            dp[i + 1][f] += dp[i][j];
            dp[i + 1][f] %= MOD;
            int g = (j * a[i + 1]) % 10;
            dp[i + 1][g] += dp[i][j];
            dp[i + 1][g] %= MOD;
        }
    }

    rep(i, 10)
    {
        cout << dp[n - 1][i] << endl;
    }

    return 0;
}