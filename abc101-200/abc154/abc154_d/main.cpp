#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    int n, k;
    cin >> n >> k;

    vector<int> p(n);
    vector<int> sum(n + 1);
    sum[0] = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> p[i];
        sum[i + 1] = sum[i] + p[i];
    }

    int max = 0;
    pair<int, int> pa;

    for (int i = 0; i <= n - k; ++i)
    {
        int cur = sum[i + k] - sum[i];
        if (max < cur)
        {
            max = cur;
            pa.first = i;
            pa.second = i + k;
        }
    }

    double ans = 0;
    for (int i = pa.first; i <= pa.second - 1; ++i)
    {
        ans += double(p[i] + 1) / 2;
    }

    cout << fixed << setprecision(15) << ans << endl;

    return 0;
}
