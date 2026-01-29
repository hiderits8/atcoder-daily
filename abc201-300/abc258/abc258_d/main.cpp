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
    ll x;
    cin >> n >> x;

    vector<ll> a(n), b(n), sum(n + 1, 0);
    rep(i, n)
    {
        cin >> a[i] >> b[i];
        sum[i + 1] = sum[i] + a[i] + b[i];
    }
    ll ans = LLONG_MAX;
    for (ll i = 0; i < n && i < x; i++)
    {
        ll tmp = sum[i + 1] + b[i] * (x - i - 1);
        ans = min(ans, tmp);
    }
    cout << ans << endl;
    return 0;
}