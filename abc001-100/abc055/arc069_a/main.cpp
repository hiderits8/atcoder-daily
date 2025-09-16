#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    ll n, m;
    cin >> n >> m;

    ll ans = 0;

    if (n < m / 2)
    {
        ans += n;
        m -= 2 * n;
        ans += m / 4;
    }
    else
    {
        ans += m / 2;
    }

    cout << ans << endl;

    return 0;
}
