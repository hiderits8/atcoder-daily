#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int h, w;
    cin >> h >> w;
    vector<string> mp(h);
    rep(i, h) cin >> mp[i];

    vector<vector<int>> f(h + 1, vector<int>(w + 1, 0));
    for (int i = h - 1; i >= 0; --i)
    {
        for (int j = w - 1; j >= 0; --j)
        {
            if (mp[i][j] == '#')
                continue;
            f[i][j] = max(f[i + 1][j], f[i][j + 1]) + 1;
        }
    }

    cout << f[0][0] << endl;

    return 0;
}
