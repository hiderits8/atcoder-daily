#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(void)
{
    ll q, h, s, d, n;
    cin >> q >> h >> s >> d >> n;
    ll one_liter = min({q * 4, h * 2, s});
    ll two_liter = min(d, one_liter * 2);
    ll ans = (n / 2) * two_liter + (n % 2) * one_liter;

    cout << ans << endl;
    return 0;
}
