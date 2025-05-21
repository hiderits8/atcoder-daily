#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;

    ll limit = 1;
    for (int i = 0; i < k; i++)
    {
        limit *= 10;
    }

    ll res = 1;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        __int128 tmp = (__int128)res * a;
        if (tmp >= limit)
        {
            res = 1;
        }
        else
        {
            res *= a;
        }
    }
    cout << res << endl;

    return 0;
}