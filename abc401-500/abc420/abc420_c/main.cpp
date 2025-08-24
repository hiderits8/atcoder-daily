#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

using ll = long long;

int main()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n), b(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];

    vector<ll> mins(n);
    rep(i, n) mins[i] = min(a[i], b[i]);
    ll minsum = accumulate(mins.begin(), mins.end(), 0LL);

    while (q--)
    {
        char c;
        ll x, v;
        cin >> c >> x >> v;
        x--;

        ll old = mins[x];
        if (c == 'A')
        {
            old = mins[x];
            a[x] = v;
        }
        else if (c == 'B')
        {
            old = mins[x];
            b[x] = v;
        }
        mins[x] = min(a[x], b[x]);

        minsum += mins[x] - old;
        cout << minsum << endl;
    }
    return 0;
}