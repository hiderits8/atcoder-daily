#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll r, x, y;
    cin >> r >> x >> y;

    long double dist = sqrtl(x * x + y * y);
    ll res = ceill(dist / r);
    cout << res << endl;
    return 0;
}