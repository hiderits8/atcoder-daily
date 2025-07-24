#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll floor(ll a, ll b)
{
    ll r = (a % b + b) % b;
    return (a - r) / b;
}

int main(void)
{
    ll a, m, l, r;
    cin >> a >> m >> l >> r;
    a = ((a % m) + m) % m;
    l -= a;
    r -= a;

    cout << floor(r, m) - floor(l - 1, m) << endl;
    return 0;
}
