#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n, m;
    cin >> n >> m;
    vector<ll> a(n), s(n + 1);
    s[0] = 0;
    rep(i, n)
    {
        cin >> a[i];
        s[i + 1] = s[i] + a[i];
    }

    ll cur = 0;
    rep(i, m)
    {
        cur += (i + 1) * a[i];
    }

    ll ans = cur;

    rep(i, n - m)
    {
        cur = cur - (s[i + m] - s[i]) + m * a[i + m];
        ans = max(ans, cur);
    }

    cout << ans << endl;

    return 0;
}
