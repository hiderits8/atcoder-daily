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
    int n, q;
    cin >> n >> q;
    vector<ll> a(n), sum(n);
    rep(i, n) cin >> a[i];
    rep(i, n)
    {
        sum[i] = a[i] - (i + 1);
    }

    while (q--)
    {
        ll k;
        cin >> k;
        int idx = lower_bound(sum.begin(), sum.end(), k) - sum.begin();
        if (idx == n)
        {
            cout << a[n - 1] + (k - sum[n - 1]) << endl;
        }
        else
        {
            cout << a[idx] - (sum[idx] - k + 1) << endl;
        }
    }

    return 0;
}