#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n, k;
    cin >> n >> k;
    vector<bitset<26>> bs(n, 0);

    rep(i, n)
    {
        string s;
        cin >> s;
        for (auto ch : s)
        {
            int bi = ch - 'a';
            bs[i][bi] = 1;
        }
    }

    int ans = 0;

    rep(i, 1 << n)
    {
        vector<int> count(26, 0);

        rep(j, n)
        {
            if (i >> j & 1)
            {
                rep(c, 26)
                {
                    if (bs[j][c])
                    {
                        count[c]++;
                    }
                }
            }
        }
        int cur = 0;
        rep(c, 26)
        {
            if (count[c] == k)
            {
                cur++;
            }
        }

        ans = max(ans, cur);
    }

    cout << ans << endl;

    return 0;
}
