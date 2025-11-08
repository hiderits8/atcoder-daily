#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> h(n), b(m);
    rep(i, n) cin >> h[i];
    rep(i, m) cin >> b[i];

    sort(h.begin(), h.end());
    sort(b.begin(), b.end());

    int bp = 0;
    int ans = 0;
    rep(i, n)
    {
        int ch = h[i];
        while (bp < m)
        {
            int cb = b[bp];
            if (ch <= cb)
            {
                ans++;
                bp++;
                break;
            }
            bp++;
        }
        if (ans >= k)
        {
            cout << "Yes\n";
            return 0;
        }
    }

    cout << "No\n";

    return 0;
}