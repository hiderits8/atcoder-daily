#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    ll n, a, b;
    cin >> n >> a >> b;

    if (a == 1 || b == 1)
    {
        cout << 0 << endl;
        return 0;
    }

    ll l = lcm(a, b);

    ll total = (n + 1) * n / 2;

    auto su = [&](ll x)
    {
        ll k = n / x;
        return x * (k * (k + 1)) / 2;
    };

    ll sa = su(a);
    ll sb = su(b);
    ll sab = su(l);

    ll ans = total - sa - sb + sab;

    cout << ans << endl;
    return 0;
}
