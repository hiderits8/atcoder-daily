#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    set<int> a;
    rep(i, n)
    {
        int step;
        cin >> step;
        a.insert(step);
    }
    int m;
    cin >> m;
    set<int> b;
    rep(i, m)
    {
        int step;
        cin >> step;
        b.insert(step);
    }
    int x;
    cin >> x;

    /** dp そのマスに行けるかどうか */
    vector<bool> dp(x + 1, false);
    dp[0] = true;

    rep(i, x)
    {
        if (dp[i] && b.find(i) == b.end())
        {
            for (auto s : a)
            {
                if (i + s <= x)
                    dp[i + s] = true;
            }
        }
    }

    cout << (dp[x] ? "Yes" : "No") << endl;

    return 0;
}
