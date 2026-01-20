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

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n), fa(n, 0);
    rep(i, n) cin >> a[i];

    for (int i = 1; i < n; ++i)
    {
        if (i % 2 == 0)
            fa[i] = fa[i - 1] + a[i] - a[i - 1];
        else
            fa[i] = fa[i - 1];
    }

    int q;
    cin >> q;

    auto f = [&](ll x) -> ll
    {
        ll j = lower_bound(a.begin() + 1, a.end(), x) - a.begin() - 1;
        return fa[j] + (fa[j + 1] - fa[j]) * (x - a[j]) / (a[j + 1] - a[j]);
    };

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << f(r) - f(l) << endl;
    }

    return 0;
}