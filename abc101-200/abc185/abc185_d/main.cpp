#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    int n, m;
    cin >> n >> m;

    if (m == 0)
    {
        cout << 1 << endl;
        return 0;
    }

    vector<int> a(m + 2);
    a[0] = 0;
    a[m + 1] = n + 1;
    for (int i = 0; i < m; ++i)
    {
        cin >> a[i + 1];
    }
    sort(a.begin(), a.end());

    map<int, int> gap;
    int prev = 0;
    int mi = INT_MAX;
    for (int i = 1; i <= m + 1; ++i)
    {
        int len = a[i] - prev - 1;
        gap[len]++;
        if (len != 0 && len < mi)
        {
            mi = len;
        }
        prev = a[i];
    }

    int ans = 0;

    for (auto &[l, c] : gap)
    {
        int num = l / mi;
        if (l % mi != 0)
            num++;
        ans += num * c;
    }

    cout << ans << endl;
    return 0;
}
