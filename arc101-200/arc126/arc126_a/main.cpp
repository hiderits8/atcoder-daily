#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n2, n3, n4;
        cin >> n2 >> n3 >> n4;
        ll ans = 0;

        ll a = min(n3 / 2, n4);
        n4 -= a;
        n3 -= a * 2;
        ans += a;

        a = min(n2 / 2, n3 / 2);
        n2 -= a * 2;
        n3 -= a * 2;
        ans += a;

        a = min(n4 / 2, n2);
        n4 -= a * 2;
        n2 -= a;
        ans += a;

        a = min(n4, n2 / 3);
        n4 -= a;
        n2 -= a * 3;
        ans += a;

        a = n2 / 5;
        n2 -= a * 5;
        ans += a;

        cout << ans << endl;
    }
    return 0;
}
