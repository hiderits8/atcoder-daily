#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;

    vector<vector<int>> mp(n, vector<int>(n));
    int m = 0;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        for (int j = 0; j < n; ++j)
        {
            mp[i][j] = s[j] - '0';
            m = max(m, mp[i][j]);
        }
    }

    vector<pair<int, int>> start;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (mp[i][j] == m)
            {
                start.emplace_back(i, j);
            }
        }
    }

    ll ans = 0;
    for (auto &[y, x] : start)
    {
        string a = "";
        // 上
        for (int i = 0; i < n; ++i)
        {
            a += to_string(mp[(y - i + n) % n][x]);
        }
        ans = max(ans, stoll(a));
        // 下
        a = "";
        for (int i = 0; i < n; ++i)
        {
            a += to_string(mp[(y + i + n) % n][x]);
        }
        ans = max(ans, stoll(a));
        // 左
        a = "";
        for (int i = 0; i < n; ++i)
        {
            a += to_string(mp[y][(x - i + n) % n]);
        }
        ans = max(ans, stoll(a));
        // 右
        a = "";
        for (int i = 0; i < n; ++i)
        {
            a += to_string(mp[y][(x + i + n) % n]);
        }
        ans = max(ans, stoll(a));
        // 左上
        a = "";
        for (int i = 0; i < n; ++i)
        {
            a += to_string(mp[(y - i + n) % n][(x - i + n) % n]);
        }
        ans = max(ans, stoll(a));
        // 右上
        a = "";
        for (int i = 0; i < n; ++i)
        {
            a += to_string(mp[(y - i + n) % n][(x + i + n) % n]);
        }
        ans = max(ans, stoll(a));
        // 右下
        a = "";
        for (int i = 0; i < n; ++i)
        {
            a += to_string(mp[(y + i + n) % n][(x + i + n) % n]);
        }
        ans = max(ans, stoll(a));
        // 左下
        a = "";
        for (int i = 0; i < n; ++i)
        {
            a += to_string(mp[(y + i + n) % n][(x - i + n) % n]);
        }
        ans = max(ans, stoll(a));
    }
    cout << ans << endl;
    return 0;
}
