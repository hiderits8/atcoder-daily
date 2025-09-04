#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int r, g, b, n;
    cin >> r >> g >> b >> n;

    int rr = n / r, rg = n / g;

    ll ans = 0;
    for (int i = 0; i <= rr; ++i)
    {
        for (int j = 0; j <= rg; ++j)
        {
            int cur = n - r * i - g * j;
            if (cur >= 0 && cur % b == 0)
                ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
