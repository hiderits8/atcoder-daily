#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    ll d;
    cin >> d;

    ll ans = d;
    ll y = 2e6;

    for (ll x = 0; x <= 2e6; ++x)
    {
        while (y > 0 && x * x + y * y > d)
        {
            y--;
        }
        ans = min(ans, abs(x * x + y * y - d));
        ans = min(ans, abs(x * x + (y + 1) * (y + 1) - d));
    }

    cout << ans << endl;
    return 0;
}
