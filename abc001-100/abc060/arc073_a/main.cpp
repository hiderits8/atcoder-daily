#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(void)
{
    ll n, t;
    cin >> n >> t;
    bool start = true;
    ll prev = 0;
    ll ans = 0;
    while (n--)
    {
        int a;
        cin >> a;

        if (a >= prev + t || start)
        {
            ans += t;
            prev = a;
            start = false;
        }
        else
        {
            ans += a - prev;
            prev = a;
        }
    }

    cout << ans << endl;
    return 0;
}
