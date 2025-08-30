#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

const ll TARGET = 2e12;

int main(void)
{
    ll a, k;
    cin >> a >> k;

    if (k == 0)
    {
        cout << TARGET - a << endl;
        return 0;
    }

    ll an = a;
    ll ans = 0;
    while (1)
    {
        ans++;
        an = 1 + (k + 1) * an;
        if (an >= TARGET)
        {
            cout << ans << endl;
            return 0;
        }
    }

    return 0;
}
