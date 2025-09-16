#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        if (n < 7)
        {
            cout << -1 << endl;
            continue;
        }

        bitset<60> bs(n);

        if (bs.count() > 3)
        {
            int cnt = bs.count();
            for (int i = 0; i < 60; ++i)
            {
                if (bs[i] == true)
                {
                    bs[i] = false;
                    cnt--;
                    if (cnt == 3)
                        break;
                }
            }
            cout << bs.to_ullong() << endl;
            continue;
        }
        else if (bs.count() == 3)
        {
            cout << n << endl;
            continue;
        }
        else if (bs.count() == 2)
        {
            int right = 0, left = 0;
            for (int i = 0; i < 60; ++i)
            {
                if (bs[i] == true)
                {
                    right = i;
                    break;
                }
            }

            for (int i = 59; i >= 0; --i)
            {
                if (bs[i] == true)
                {
                    left = i;
                    break;
                }
            }

            if (right <= 1)
            {
                bs[right] = false;
                bs[left] = false;
                bs[left - 1] = true;
                bs[left - 2] = true;
                bs[left - 3] = true;
            }
            else
            {
                bs[right] = false;
                bs[right - 1] = true;
                bs[right - 2] = true;
            }
            cout << bs.to_ullong() << endl;
            continue;
        }
        else
        {
            int f = 0;
            for (int i = 0; i < 60; ++i)
            {
                if (bs[i] == true)
                {
                    f = i;
                    break;
                }
            }
            bs[f] = false;
            bs[f - 1] = true;
            bs[f - 2] = true;
            bs[f - 3] = true;
            cout << bs.to_ullong() << endl;
            continue;
        }
    }

    return 0;
}
