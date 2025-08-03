#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;

    map<int, int> mp;
    while (n--)
    {
        int a;
        cin >> a;
        mp[a]++;
    }

    ll ans = 0;
    for (auto &[k, v] : mp)
    {
        ans += 1LL * k * v;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int b, c;
        cin >> b >> c;
        int cnt = mp[b];
        mp.erase(b);
        mp[c] += cnt;

        ans += (c - b) * cnt;

        cout << ans << endl;
    }

    return 0;
}
