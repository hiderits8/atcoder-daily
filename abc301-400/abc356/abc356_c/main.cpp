#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> key(m, vector<int>(n, 0));
    vector<string> r(m);
    rep(i, m)
    {
        int c;
        cin >> c;
        rep(j, c)
        {
            int a;
            cin >> a;
            key[i][a - 1] = 1;
        }
        cin >> r[i];
    }

    int ans = 0;

    for (int bit = 0; bit < (1 << n); ++bit)
    {
        vector<int> t(n, 0);
        rep(i, n)
        {
            if (bit & (1 << i))
                t[i] = 1;
        }

        bool ok = true;
        rep(i, m)
        {
            int cn = 0;
            rep(j, n)
            {
                if (key[i][j] == 1 && t[j] == 1)
                {
                    cn++;
                }
            }
            if (cn >= k && r[i] == "x")
            {
                ok = false;
            }
            if (cn < k && r[i] == "o")
            {
                ok = false;
            }
        }
        if (ok)
        {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
