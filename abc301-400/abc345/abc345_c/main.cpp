#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    string s;
    cin >> s;
    map<char, int> mp;

    for (auto ch : s)
    {
        mp[ch]++;
    }

    ll ans = 1LL * s.size() * s.size();
    bool same = false;

    for (auto &[ch, cnt] : mp)
    {
        ans -= 1LL * cnt * cnt;
        if (cnt > 1)
            same = true;
    }

    ans /= 2;

    if (same)
        ans++;

    cout << ans << endl;
    return 0;
}
