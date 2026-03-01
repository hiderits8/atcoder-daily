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
    int n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll lo = 0, hi = 1e9 + 1;
    while (lo + 1 < hi)
    {
        ll mid = (lo + hi) / 2;
        ll sellers = upper_bound(a.begin(), a.end(), mid) - a.begin();
        ll buyers = b.end() - lower_bound(b.begin(), b.end(), mid);

        if (sellers >= buyers)
            hi = mid;
        else
            lo = mid;
    }
    cout << hi << endl;
    return 0;
}