#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int ans = 0;
        ans += min({a, b, c});

        a -= ans;
        c -= ans;

        ans += min({(a + c) / 3, a, c});
        cout << ans << endl;
    }
    return 0;
}