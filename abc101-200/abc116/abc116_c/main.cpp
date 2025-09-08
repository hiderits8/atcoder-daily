#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i, n) cin >> h[i];

    int m = *max_element(begin(h), end(h));
    int ans = 0;

    for (int i = 1; i <= m; ++i)
    {
        int cnt = 0;
        bool flg = false;
        for (int j = 0; j < n; ++j)
        {
            if (h[j] >= i)
            {
                flg = true;
            }
            else if (flg && h[j] < i)
            {
                cnt++;
                flg = false;
            }
        }
        if (flg)
            cnt++;
        ans += cnt;
    }

    cout << ans << endl;

    return 0;
}
