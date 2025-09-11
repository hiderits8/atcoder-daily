#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    ll a, b, c;
    cin >> a >> b >> c;

    if (!(a & 1 && b & 1 && c & 1))
    {
        cout << 0 << endl;
        return 0;
    }

    cout << min({a * b, b * c, c * a}) << endl;

    return 0;
}
