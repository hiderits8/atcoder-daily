#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    ll n, k;
    cin >> n >> k;

    ll ans = 1;

    rep(i, n)
    {
        if (i == 0)
        {
            ans *= k;
        }
        else
        {
            ans *= k - 1;
        }
    }

    cout << ans << endl;

    return 0;
}
