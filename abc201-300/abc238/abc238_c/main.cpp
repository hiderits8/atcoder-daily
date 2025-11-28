#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
#define mod 998244353
#define inv2 499122177

ll solve(ll x)
{
    x %= mod;
    ll res = x;
    res *= (x + 1);
    res %= mod;
    res *= inv2;
    res %= mod;
    return res;
}

int main(void)
{
    ll n;
    cin >> n;

    ll ans = 0;
    ll p = 10;
    for (int dig = 1; dig <= 18; ++dig)
    {
        ll l = p / 10;
        ll r = min(n, p - 1);
        if (l <= r)
        {
            ans += solve(r - l + 1);
            ans %= mod;
        }
        p *= 10;
    }

    cout << ans << endl;

    return 0;
}
