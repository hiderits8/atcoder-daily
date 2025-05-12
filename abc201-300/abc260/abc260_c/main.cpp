#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n, x, y, r[12], b[12];
    cin >> n >> x >> y;

    r[1] = 0;
    b[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        b[i] = r[i - 1] + b[i - 1] * y;
        r[i] = r[i - 1] + b[i] * x;
    }

    cout << r[n] << endl;
    return 0;
}