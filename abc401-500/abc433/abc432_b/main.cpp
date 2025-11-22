#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    rep(i, n)
    {
        int ans = -1;
        if (i == 0)
        {
            cout << -1 << endl;
            continue;
        }

        for (int j = i - 1; j >= 0; --j)
        {
            if (a[j] > a[i])
            {
                ans = j + 1;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}