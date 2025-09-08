#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    vector<int> H(3), W(3);
    ll ans = 0;
    rep(i, 3) cin >> H[i];
    rep(i, 3) cin >> W[i];

    for (int a = 1; a <= 30; ++a)
    {
        for (int b = 1; b <= 30; ++b)
        {
            for (int d = 1; d <= 30; ++d)
            {
                for (int e = 1; e <= 30; ++e)
                {
                    int c = H[0] - a - b;
                    int f = H[1] - d - e;
                    int g = W[0] - a - d;
                    int h = W[1] - b - e;
                    int i = W[2] - c - f;
                    if (min({c, f, g, h, i}) > 0 && g + h + i == H[2])
                        ans++;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}
