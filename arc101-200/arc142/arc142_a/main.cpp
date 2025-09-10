#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    ll n, k;
    cin >> n >> k;

    ll ans = 0;

    ll a = k;
    while (a % 10 == 0)
        a /= 10;

    ll r = 0, b = a;
    while (1)
    {
        ll cur = b % 10;
        r = r * 10 + cur;
        b /= 10;
        if (b == 0)
            break;
    }

    if (min(a, r) != k)
    {
        cout << 0 << endl;
        return 0;
    }

    bool flag = a == r;

    while (k <= n)
    {
        ans++;
        k *= 10;
    }

    if (!flag)
    {
        while (r <= n)
        {
            ans++;
            r *= 10;
        }
    }

    cout << ans << endl;
    return 0;
}
