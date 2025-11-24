#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const ll MOD = 998244353;

int main(void)
{
    ll x;
    cin >> x;

    if (x == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    map<ll, ll> mp;
    mp[2] = 2;
    mp[3] = 3;
    mp[4] = 4;

    auto f = [&](auto &f, ll n) -> ll
    {
        if (n == 2)
            return mp[2];
        if (n == 3)
            return mp[3];
        if (n == 4)
            return mp[4];
        if (!mp.count(n))
        {
            mp[n] = f(f, n / 2) * f(f, (n + 1) / 2) % MOD;
        }
        return mp[n];
    };

    cout << f(f, x) << endl;

    return 0;
}
