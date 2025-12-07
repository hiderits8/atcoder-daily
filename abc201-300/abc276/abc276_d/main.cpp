#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> d2(n, 0);
    vector<int> d3(n, 0);

    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());

    rep(i, n)
    {
        while (a[i] % 2 == 0)
        {
            a[i] /= 2;
            d2[i]++;
        }
        while (a[i] % 3 == 0)
        {
            a[i] /= 3;
            d3[i]++;
        }
    }

    for (int i = 1; i < n; ++i)
    {
        if (a[i] != a[0])
        {
            cout << -1 << endl;
            return 0;
        }
    }

    int m2 = *min_element(d2.begin(), d2.end());
    int m3 = *min_element(d3.begin(), d3.end());

    int ans = 0;

    rep(i, n)
    {
        ans += (d2[i] - m2) + (d3[i] - m3);
    }

    cout << ans << endl;

    return 0;
}
