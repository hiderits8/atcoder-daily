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
#include <climits>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    int n;
    ll p, q, r;
    cin >> n >> p >> q >> r;
    vector<ll> a(n), s(n + 1, 0);
    rep(i, n)
    {
        cin >> a[i];
        s[i + 1] = s[i] + a[i];
    }
    rep(i, n - 2)
    {
        ll x = s[i] + p;
        auto ita = lower_bound(s.begin() + i + 1, s.end(), x);
        if (ita == s.end() || *ita != x)
            continue;

        ll y = *ita + q;
        auto itb = lower_bound(s.begin() + (ita - s.begin()) + 1, s.end(), y);
        if (itb == s.end() || *itb != y)
            continue;

        ll z = *itb + r;
        auto itc = lower_bound(s.begin() + (itb - s.begin()) + 1, s.end(), z);
        if (itc == s.end() || *itc != z)
            continue;

        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    return 0;
}