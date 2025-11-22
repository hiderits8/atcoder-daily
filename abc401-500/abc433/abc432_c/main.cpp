#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const ll INF = LLONG_MAX;

int main()
{
    string t;
    cin >> t;

    int prev = -2;
    int cur = -2;
    int prev_count = 0;
    int cur_count = 0;

    int ans = 0;

    rep(i, t.size())
    {
        if (t[i] - '0' != cur)
        {
            if (cur == prev + 1)
            {
                ans += min(prev_count, cur_count);
            }

            prev = cur;
            cur = t[i] - '0';

            prev_count = cur_count;
            cur_count = 0;
        }
        cur_count++;
        if (i == t.size() - 1)
        {
            if (cur == prev + 1)
            {
                ans += min(prev_count, cur_count);
            }
        }
    }
    cout << ans << endl;

    return 0;
}