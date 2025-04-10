#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    ll res = 0;

    for (ll a = 1; (1LL << a) <= n; ++a)
    {
        long double p = (long double)n / (1LL << a);
        ll q = (ll)floor(sqrt(p));

        if (q == 0)
            break;

        ll cnt = (q + 1) / 2;
        res += cnt;
    }

    cout << res << endl;

    return 0;
}