#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    string s;
    cin >> n >> s;

    int r_cnt = 0;
    for (auto &ch : s)
    {
        if (ch == 'R')
            r_cnt++;
    }

    int ans = 0;
    for (int i = 0; i < r_cnt; ++i)
    {
        if (s[i] == 'W')
            ans++;
    }

    cout << ans << endl;
    return 0;
}
