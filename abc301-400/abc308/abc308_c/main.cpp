#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;

    vector<pair<ll, ll>> v;
    rep(i, n)
    {
        ll a, b;
        cin >> a >> b;
        v.emplace_back(a, a + b);
    }

    vector<int> p(n);
    iota(p.begin(), p.end(), 0);

    auto f = [&](int i, int j)
    {
        auto [ai, abi] = v[i];
        auto [aj, abj] = v[j];
        return ai * abj > aj * abi;
    };

    stable_sort(p.begin(), p.end(), f);
    for (int i = 0; i < n; ++i)
    {
        cout << p[i] + 1 << (i == n - 1 ? "\n" : " ");
    }

    return 0;
}
