#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const ll INF = LLONG_MAX;

int main()
{
    ll n, x, y;
    cin >> n >> x >> y;
    ll d = y - x;

    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    ll l = 0, r = INF;
    ll z = a[0] * x % d;

    rep(i, n)
    {
        ll cl = a[i] * x;
        ll cr = a[i] * y;

        if (r < cl || l > cr || cr % d != z)
        {
            cout << -1 << endl;
            return 0;
        }

        l = max(l, cl);
        r = min(r, cr);
    }

    ll ans = 0;

    rep(i, n)
    {
        ll cm = a[i] * y;
        ans += a[i] - (cm - r + d - 1) / d;
    }

    cout << ans << endl;

    return 0;
}