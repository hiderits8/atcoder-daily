#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

unordered_map<ll, ll> dp = {{0, 1}};

ll f(ll x)
{
    if (dp.count(x))
        return dp[x];
    dp[x] = f(x / 2) + f(x / 3);
    return dp[x];
}

int main(void)
{
    ll n;
    cin >> n;

    cout << f(n) << endl;

    return 0;
}
