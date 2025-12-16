#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int h, w, k;
    cin >> h >> w >> k;
    vector<string> mp(h);
    rep(i, h) cin >> mp[i];

    int ans = 0;

    rep(i, (1 << h))
    {
        rep(j, (1 << w))
        {
            int cnt = 0;
            rep(x, h)
            {
                if (!(i & 1 << x))
                {
                    rep(y, w)
                    {
                        if (!(j & 1 << y))
                        {
                            if (mp[x][y] == '#')
                                cnt++;
                        }
                    }
                }
            }
            if (cnt == k)
                ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
