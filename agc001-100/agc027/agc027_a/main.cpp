#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll N, x;
    cin >> N >> x;
    map<int, int> mp;
    for (int i = 0; i < N; ++i)
    {
        int a;
        cin >> a;
        mp[a]++;
    }

    int res = 0;

    for (auto &c : mp)
    {
        x -= (ll)c.first * (ll)c.second;
        if (x >= 0)
        {
            res += c.second;
        }
        else
        {
            x += (ll)c.first * (ll)c.second;
            for (int i = 0; i < c.second; ++i)
            {
                x -= c.first;
                if (x >= 0)
                {
                    res++;
                }
                else
                {
                    break;
                }
            }
            break;
        }
    }

    if (res == N && x > 0)
    {
        --res;
    }

    cout << res << endl;

    return 0;
}