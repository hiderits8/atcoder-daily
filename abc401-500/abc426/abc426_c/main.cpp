#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

using ll = long long;

int main()
{
    int n, q;
    cin >> n >> q;

    map<int, int> mp;
    for (int i = 1; i <= n; ++i)
    {
        mp[i] = 1;
    }

    while (q--)
    {
        int x, y;
        cin >> x >> y;

        int ans = 0;
        auto it = mp.begin();
        while (it != mp.end() && it->first <= x)
        {
            ans += it->second;
            mp[y] += it->second;
            it = mp.erase(it);
        }

        cout << ans << endl;
    }
    return 0;
}