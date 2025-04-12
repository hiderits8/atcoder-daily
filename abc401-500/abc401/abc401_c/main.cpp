#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000000;

int fib(int n, int k)
{
    if (n < k)
        return 1;

    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i < k; ++i)
    {
        dp[i] = 1;
    }

    int sum = k % MOD;

    for (int i = k; i <= n; ++i)
    {
        dp[i] = sum;

        sum = (sum + dp[i]) % MOD;
        sum = (sum - dp[i - k] + MOD) % MOD;
    }

    return dp[n] % MOD;
}

int main()
{
    int n, k;
    cin >> n >> k;

    cout << fib(n, k) << endl;

    return 0;
}