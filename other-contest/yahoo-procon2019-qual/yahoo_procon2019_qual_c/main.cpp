#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    ll k, a, b;
    cin >> k >> a >> b;

    if (k <= a || (b - a) <= 2)
    {
        cout << k + 1 << endl;
        return 0;
    }
    else
    {
        ll ans = 1;
        ans += a - 1;
        k -= a - 1;
        ans += (b - a) * (k / 2);
        k -= (k / 2) * 2;
        if (k == 1)
            ans++;
        cout << ans << endl;
    }

    return 0;
}
