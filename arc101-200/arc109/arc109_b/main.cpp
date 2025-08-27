#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    ll n;
    cin >> n;

    ll l = 0, r = 2e9; // m * (m + 1) / 2 <= e18　を解くとだいたい　m <= 1.42e9

    while (r - l > 1)
    {
        ll m = (l + r) / 2;
        (m * (m + 1) / 2 <= n + 1 ? l : r) = m;
    }

    cout << n - l + 1 << endl;
    return 0;
}
