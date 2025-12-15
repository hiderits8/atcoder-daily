#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

ll powmod(ll x, ll y)
{
    ll res = 1;
    for (ll i = 0; i < y; ++i)
    {
        res = res * x % MOD;
    }
    return res;
}

int main(void)
{
    ll n;
    cin >> n;

    ll ans = powmod(10, n) - powmod(9, n) - powmod(9, n) + powmod(8, n);
    ans %= MOD;
    ans = (ans + MOD) % MOD;

    cout << ans << endl;
    return 0;
}
