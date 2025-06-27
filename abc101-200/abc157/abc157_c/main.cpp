#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, m;
    cin >> n >> m;
    vector<int> mp(n + 1, 10);

    while (m--)
    {
        int s, c;
        cin >> s >> c;

        if (s == 1 && c == 0)
        {
            if (n == 1)
            {
                cout << 0 << endl;
                return 0;
            }
            cout << -1 << endl;
            return 0;
        }

        if (mp[s] != 10 && mp[s] != c)
        {
            cout << -1 << endl;
            return 0;
        }

        mp[s] = c;
    }

    int ans = 0;

    for (int i = 1; i <= n; ++i)
    {
        if (mp[i] == 10)
        {
            if (i == 1)
            {
                if (n == 2)
                {
                    ans += 10;
                }
                else if (n == 3)
                {
                    ans += 100;
                }
            }
            continue;
        }
        if (n - i == 0)
        {
            ans += mp[i];
        }
        else if (n - i == 1)
        {
            ans += mp[i] * 10;
        }
        else if (n - i == 2)
        {
            ans += mp[i] * 100;
        }
    }

    cout << ans << endl;
    return 0;
}
