#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        mp[a]++;
    }

    int ans = 0;
    for (int i = 0; i <= 1000000000; ++i)
    {
        int cnt = 0;
        for (auto [num, c] : mp)
        {
            if (num >= i)
            {
                cnt += c;
            }
        }

        if (cnt >= i)
        {
            ans = i;
        }
        else
        {
            cout << ans << endl;
            return 0;
        }
    }

    return 0;
}