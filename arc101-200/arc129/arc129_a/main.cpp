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
    ll n, l, r;
    cin >> n >> l >> r;

    ll ans = 0;
    for (int i = 0; i <= 60; ++i)
    {
        if (((n >> i) & 1LL) == 0)
            continue;

        ll lo = max(l, 1LL << i);
        ll hi = min(r, (1LL << (i + 1)) - 1);
        if (lo > hi)
            continue;
        ans += hi - lo + 1;
    }

    cout << ans << endl;
    return 0;
}