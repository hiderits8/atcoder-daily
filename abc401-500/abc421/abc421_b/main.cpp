#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll x, y;
    cin >> x >> y;

    auto f = [&](ll a) -> ll
    {
        ll r = 0;
        while (a > 0)
        {
            r *= 10;
            r += a % 10;
            a /= 10;
        }
        return r;
    };

    ll prev_1 = x, prev_2 = y, a_cur = 0;
    for (int i = 3; i <= 10; ++i)
    {
        a_cur = f(prev_1 + prev_2);
        prev_1 = prev_2;
        prev_2 = a_cur;
    }

    cout << a_cur << endl;

    return 0;
}