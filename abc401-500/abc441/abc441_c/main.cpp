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
    int n, k;
    ll x;
    cin >> n >> k >> x;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    sort(a.rbegin(), a.rend());

    int ans;
    ll d = 0;
    for (int i = n - k; i < n; ++i)
    {
        d += a[i];
        if (d >= x)
        {
            ans = i + 1;
            break;
        }
    }
    if (d >= x)
    {
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}