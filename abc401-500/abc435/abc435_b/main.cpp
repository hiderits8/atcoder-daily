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

    vector<int> sum(n + 1, 0);
    rep(i, n) sum[i + 1] = sum[i] + a[i];

    int ans = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            int csum = sum[j + 1] - sum[i];
            bool ok = true;
            for (int k = i; k <= j; ++k)
            {
                if (csum % a[k] == 0)
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
                ans++;
        }
    }

    cout << ans << endl;
    return 0;
}