#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    ll a, b;
    cin >> a >> b;

    ll ans = 0;
    while (a % 4 != 0)
        a++;

    while (a <= b)
    {
        if (a % 100 != 0 || a % 400 == 0)
            ans++;
        a += 4;
    }

    cout << ans << endl;
    return 0;
}