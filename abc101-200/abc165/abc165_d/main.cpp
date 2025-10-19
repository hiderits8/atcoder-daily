#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

ll a, b, n;

ll f(ll x)
{
    return (a * x) / b - a * (x / b);
}

int main(void)
{
    cin >> a >> b >> n;

    ll ans = 0;
    ans = max(ans, f(n));
    if (b - 1 <= n)
        ans = max(ans, f(b - 1));

    cout << ans << endl;

    return 0;
}
