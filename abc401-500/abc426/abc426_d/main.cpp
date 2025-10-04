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
        cin >> n;
        string s;
        cin >> s;

        int cnt0 = 0, cnt1 = 0;
        int cur0 = 0, cur1 = 0, max0 = 0, max1 = 0;

        for (char c : s)
        {
            if (c == '0')
            {
                cnt0++;
                cur0++;
                cur1 = 0;
                max0 = max(max0, cur0);
            }
            else
            {
                cnt1++;
                cur1++;
                cur0 = 0;
                max1 = max(max1, cur1);
            }
        }

        int ans = 0;
        ans = min((cnt1 - max1) * 2 + cnt0, (cnt0 - max0) * 2 + cnt1);
        cout << ans << endl;
    }
    return 0;
}