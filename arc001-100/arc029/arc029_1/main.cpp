#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    vector<int> a(n);

    int sum = 0;
    rep(i, n)
    {
        cin >> a[i];
        sum += a[i];
    }

    int ans = INT_MAX;

    rep(bit, 1 << n)
    {
        int x = 0;
        rep(j, n)
        {
            if (1 << j & bit)
            {
                x += a[j];
            }
        }
        ans = min(ans, max(x, sum - x));
    }

    cout << ans << endl;

    return 0;
}
