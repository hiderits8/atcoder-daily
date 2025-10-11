#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    ll l, r;
    cin >> l >> r;

    if (r - l >= 2019)
    {
        cout << 0 << endl;
        return 0;
    }

    ll ans = 2018;
    for (ll i = l; i < r; ++i)
    {
        for (ll j = i + 1; j <= r; ++j)
        {
            ll tmp = (i * j) % 2019;
            ans = min(ans, tmp);
        }
    }

    cout << ans << endl;
    return 0;
}
