#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, m;
    cin >> n >> m;

    unordered_map<int, int> mp;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        mp[a]++;
    }

    int ans = -1;

    for (auto &[a, cnt] : mp)
    {
        if (cnt > n / 2)
            ans = a;
    }

    if (ans < 0)
    {
        cout << "?" << endl;
        return 0;
    }

    cout << ans << endl;
    return 0;
}
