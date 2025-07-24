#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b)
{
    if (a < b)
        swap(a, b);
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main(void)
{
    ll l, r;
    cin >> l >> r;
    ll n = 0;

    while (1)
    {
        for (ll i = 0; i <= n; ++i)
        {
            ll left = l + i;
            ll right = r + i;
            if (gcd(right, left) == 1)
            {
                cout << right - left << endl;
                return 0;
            }
        }
        r--;
        n++;
    }

    return 0;
}
