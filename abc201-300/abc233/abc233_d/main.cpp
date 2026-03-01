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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), sum(n + 1, 0);
    rep(i, n)
    {
        cin >> a[i];
        sum[i + 1] = sum[i] + a[i];
    }
    unordered_map<ll, ll> count;
    ll ans = 0;
    for (ll r = 1; r <= n; r++)
    {
        count[sum[r - 1]]++;
        ans += count[sum[r] - k];
    }
    cout << ans << endl;
    return 0;
}