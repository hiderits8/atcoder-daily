#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n, k;
    cin >> n >> k;

    ll ans = 0;

    for (int x = 2; x <= 2 * n; ++x)
    {
        int y = x - k;
        if (y < 2 || y > 2 * n)
            continue;
        int countX = min(x - 1, 2 * n + 1 - x);
        int countY = min(y - 1, 2 * n + 1 - y);
        ans += 1LL * countX * countY;
    }

    cout << ans << endl;

    return 0;
}
