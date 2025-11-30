#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const int H = 2000;
const int W = 2000;
int diff[H + 2][W + 2];
int cnt[H][W];
int mask1[H][W];
int psum[H + 1][W + 1];

struct Rect
{
    int u, d, l, r;
};

int main()
{
    int n;
    cin >> n;
    vector<Rect> layer(n);

    rep(i, n)
    {
        int u, d, l, r;
        cin >> u >> d >> l >> r;
        u--;
        l--;
        layer[i] = {u, d, l, r};

        diff[u][l] += 1;
        diff[u][r] -= 1;
        diff[d][l] -= 1;
        diff[d][r] += 1;
    }

    for (int x = 0; x <= H; ++x)
        for (int y = 1; y <= W; ++y)
            diff[x][y] += diff[x][y - 1];

    for (int y = 0; y <= W; ++y)
        for (int x = 1; x <= H; ++x)
            diff[x][y] += diff[x - 1][y];

    int base0 = 0;
    rep(x, H) rep(y, W)
    {
        cnt[x][y] = diff[x][y];
        if (cnt[x][y] == 0)
            base0++;
        mask1[x][y] = (cnt[x][y] == 1 ? 1 : 0);
    }

    for (int x = 0; x <= H; x++)
    {
        for (int y = 0; y <= W; y++)
        {
            psum[x][y] = 0;
        }
    }

    rep(x, H) rep(y, W)
    {
        psum[x + 1][y + 1] =
            psum[x + 1][y] +
            psum[x][y + 1] -
            psum[x][y] +
            mask1[x][y];
    }

    auto rect_sum = [&](int u, int d, int l, int r) -> int
    {
        return psum[d][r] - psum[u][r] - psum[d][l] + psum[u][l];
    };

    rep(i, n)
    {
        const auto &rc = layer[i];
        int only_i = rect_sum(rc.u, rc.d, rc.l, rc.r);
        ll ans = base0 + only_i;
        cout << ans << '\n';
    }

    return 0;
}