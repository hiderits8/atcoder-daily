#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    string s;
    cin >> n >> s;
    vector<int> sum(n + 1);
    sum[0] = 0;
    rep(i, n)
    {
        if (s[i] == '1')
        {
            sum[i + 1] = sum[i] + 1;
        }
        else
        {
            sum[i + 1] = sum[i];
        }
    }

    ll ans = 0;
    rep(i, n)
    {
        if (i > 0 && s[i] == '0')
        {
            int left = sum[i], right = sum[n] - sum[i + 1];
            if (left <= right)
            {
                ans += left;
            }
            else
            {
                ans += right;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
