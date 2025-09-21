#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    vector<string> mp(n);
    rep(i, n) cin >> mp[i];

    vector<int> cnti(n, 0), cntj(n, 0);
    rep(i, n)
    {
        rep(j, n)
        {
            if (mp[i][j] == 'o')
            {
                cnti[i]++;
                cntj[j]++;
            }
        }
    }

    ll ans = 0;
    rep(i, n)
    {
        rep(j, n)
        {
            if (mp[i][j] == 'o')
            {
                ans += 1LL * (cnti[i] - 1) * (cntj[j] - 1);
            }
        }
    }

    cout << ans << endl;
    return 0;
}
