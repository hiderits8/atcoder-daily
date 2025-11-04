#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n, m;
    cin >> n >> m;
    if (m == 1 || n >= m)
    {
        cout << 0 << endl;
        return 0;
    }

    vector<int> a(m);
    rep(i, m) cin >> a[i];
    sort(a.begin(), a.end());

    vector<int> diff(m - 1);
    rep(i, m - 1) diff[i] = a[i + 1] - a[i];
    sort(diff.rbegin(), diff.rend());

    int ans = a[m - 1] - a[0];
    n--;
    int x = min(n, m);
    rep(i, x)
    {
        ans -= diff[i];
    }

    cout << ans << endl;

    return 0;
}
