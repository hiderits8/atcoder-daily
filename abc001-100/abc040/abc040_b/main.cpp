#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int l, r;
    for (int i = 1; i * i <= n; ++i)
        l = i;
    r = n / l;

    int ans = r - l + n - l * r;
    while (l > 1)
    {
        l--;
        r = n / l;
        ans = min(ans, r - l + n - l * r);
    }

    cout << ans << endl;
    return 0;
}