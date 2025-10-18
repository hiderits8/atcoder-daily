#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int s, a, b, x;
    cin >> s >> a >> b >> x;

    int q = x / (a + b);
    int r = x % (a + b);

    int ans = q * s * a;
    if (r <= a)
    {
        ans += r * s;
    }
    else
    {
        ans += a * s;
    }

    cout << ans << endl;

    return 0;
}