#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <iomanip>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
const ll MOD = 998244353;

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n), b(n), c(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    rep(i, n) cin >> c[i];

    vector<ll> sa(n + 1, 0), sb(n + 1, 0), sc(n + 1, 0);
    rep(i, n)
    {
        sa[i + 1] = sa[i] + a[i];
        sb[i + 1] = sb[i] + b[i];
        sc[i + 1] = sc[i] + c[i];
    }

    ll ans = 0;
    ll mX = sa[1] - sb[1];

    for (int j = 2; j < n; ++j)
    {
        ll Yj = sb[j] - sc[j];
        ans = max(ans, sc[n] + mX + Yj);

        if (j <= n - 2)
            mX = max(mX, sa[j] - sb[j]);
    }

    cout << ans << endl;

    return 0;
}