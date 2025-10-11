#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    unordered_map<int, int> mp;

    rep(i, n)
    {
        int a;
        cin >> a;
        mp[a]++;
    }

    int ans = 0;
    for (auto [num, cnt] : mp)
    {
        if (cnt < num)
        {
            ans += cnt;
        }
        else if (cnt > num)
        {
            ans += cnt - num;
        }
    }
    cout << ans << endl;

    return 0;
}
