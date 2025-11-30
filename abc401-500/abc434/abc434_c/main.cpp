#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll h;
        cin >> n >> h;
        ll prev_t = 0, cl = h, cu = h;
        bool ok = true;
        rep(i, n)
        {
            ll t, l, u;
            cin >> t >> l >> u;
            ll dt = t - prev_t;
            prev_t = t;
            if (cl - dt > u || cu + dt < l)
            {
                ok = false;
            }
            cu = min(cu + dt, u);
            cl = max(cl - dt, l);
        }
        cout << (ok ? "Yes\n" : "No\n");
    }

    return 0;
}