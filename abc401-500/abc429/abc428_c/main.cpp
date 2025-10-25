#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;

    map<int, ll> mp;
    rep(i, n)
    {
        int a;
        cin >> a;
        mp[a]++;
    }

    ll ans = 0;
    for (auto [num, cnt] : mp)
    {
        if (cnt < 2)
        {
            continue;
        }
        else
        {
            ans += (cnt * (cnt - 1) / 2) * (n - cnt);
        }
    }
    cout << ans << endl;

    return 0;
}