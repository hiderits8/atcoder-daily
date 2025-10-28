#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

const ll m = 1000000007;

int main(void)
{
    ll n;
    cin >> n;
    vector<ll> a(n), q(n);

    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());

    rep(i, n)
    {
        if (i == 0)
        {
            q[i] = a[i];
            continue;
        }
        q[i] = a[i] - a[i - 1];
    }

    ll ans = 1;
    rep(i, n)
    {
        ans *= (q[i] + 1LL);
        ans %= m;
    }

    cout << ans << endl;

    return 0;
}
