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
    cin >> n;
    vector<ll> a(n), sum(n + 1, 0);
    rep(i, n)
    {
        cin >> a[i];
        sum[i + 1] = sum[i] + a[i];
    }
    const ll INF = LLONG_MAX;
    ll ans = INF;
    rep(i, n - 1)
    {
        ans = min(ans, abs(sum[i + 1] - (sum[n] - sum[i + 1])));
    }

    cout << ans << endl;

    return 0;
}