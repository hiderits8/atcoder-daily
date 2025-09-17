#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    ll n, a, b;
    string s;
    cin >> n >> a >> b >> s;

    ll ans = 1LL << 60;

    for (int i = 0; i < n; ++i)
    {
        ll tmp = a * i;
        for (int j = 0; j < n / 2; ++j)
        {
            int l = (i + j) % n;
            int r = (i + n - 1 - j) % n;
            if (s[l] != s[r])
                tmp += b;
        }
        ans = min(ans, tmp);
    }

    cout << ans << endl;

    return 0;
}
