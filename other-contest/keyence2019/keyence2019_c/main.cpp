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
    vector<ll> a(n), b(n);

    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];

    vector<ll> c;
    ll sum = 0;
    rep(i, n)
    {
        if (a[i] < b[i])
            sum += b[i] - a[i];
        else
            c.push_back(a[i] - b[i]);
    }
    sort(c.rbegin(), c.rend());
    ll ans = 0;
    for (ll x : c)
    {
        if (sum > 0)
        {
            sum -= x;
            ans++;
        }
        else
        {
            break;
        }
    }
    if (sum > 0)
    {
        cout << -1 << endl;
        return 0;
    }

    cout << ans + (n - c.size()) << endl;
    return 0;
}