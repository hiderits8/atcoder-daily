#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll r, x, y;
    cin >> r >> x >> y;

    long double dist = sqrtl(x * x + y * y);
    ll res = ceill(dist / r);
    if (res == 1)
        ++res;
    if (x * x + y * y == r * r)
        res = 1;
    cout << res << endl;
    return 0;
}