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
    vector<ll> a(n);
    vector<ll> sum(n + 1, 0), m(n + 1, 0);
    rep(i, n)
    {
        cin >> a[i];
        sum[i + 1] = sum[i] + a[i];
        m[i + 1] = max(m[i], sum[i + 1]);
    }

    ll ans = 0, cur = 0;
    rep(i, n)
    {
        ans = max(ans, cur + m[i + 1]);
        cur += sum[i + 1];
    }

    cout << ans << endl;

    return 0;
}