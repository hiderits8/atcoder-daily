#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> p(n);
        vector<long long> sum(n + 1);

        sum[0] = 0;
        bool ok = true;

        for (int j = 0; j < n; ++j)
        {
            cin >> p[j];
            if (p[j] != j + 1)
            {
                ok = false;
            }
            sum[j + 1] = sum[j] + p[j];
        }

        if (ok)
        {
            cout << 0 << endl;
            continue;
        }

        for (int j = 1; j <= n; ++j)
        {
            if (sum[j - 1] == (long long)(j - 1) * j / 2 && p[j - 1] == j && sum[n] - sum[j] == (long long)(n - j) * (j + 1 + n) / 2)
            {
                ok = true;
                break;
            }
        }

        if (ok)
        {
            cout << 1 << endl;
            continue;
        }

        if (p[0] != n || p[n - 1] != 1)
        {
            cout << 2 << endl;
            continue;
        }

        cout << 3 << endl;
    }
    return 0;
}
