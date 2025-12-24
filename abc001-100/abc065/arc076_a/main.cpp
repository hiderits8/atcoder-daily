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
const ll MOD = 1e9 + 7;

int main()
{
    int n, m;
    cin >> n >> m;
    if (abs(n - m) > 1)
    {
        cout << 0 << endl;
        return 0;
    }

    ll ans = 1;
    for (ll i = n; i > 0; --i)
    {
        ans *= i;
        ans %= MOD;
    }
    for (ll i = m; i > 0; --i)
    {
        ans *= i;
        ans %= MOD;
    }

    if (n == m)
    {
        ans *= 2;
        ans %= MOD;
    }

    cout << ans << endl;

    return 0;
}