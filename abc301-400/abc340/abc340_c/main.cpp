#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    ll n;
    cin >> n;

    map<ll, ll> mp;
    auto f = [&](auto self, ll a) -> ll
    {
        if (a == 1)
        {
            return 0;
        }
        if (mp.count(a))
            return mp[a];
        return mp[a] = self(self, a / 2) + self(self, (a + 1) / 2) + a;
    };

    cout << f(f, n) << endl;

    return 0;
}
