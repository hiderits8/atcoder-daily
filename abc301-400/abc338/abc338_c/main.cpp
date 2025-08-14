#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> q(n), a(n), b(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> q[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
    }

    int maxA = 0;

    int mi = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == 0)
            continue;
        int cur = q[i] / a[i];
        mi = min(mi, cur);
    }
    if (mi > 0)
    {
        for (int i = 0; i < n; ++i)
        {
            q[i] -= mi * a[i];
        }
        maxA += mi;
    }

    int minB = 0;

    mi = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        if (b[i] == 0)
            continue;
        int cur = q[i] / b[i];
        mi = min(mi, cur);
    }
    if (mi > 0)
    {
        for (int i = 0; i < n; ++i)
        {
            q[i] -= mi * b[i];
        }
        minB += mi;
    }

    int ans = maxA + minB;

    int k = maxA;

    for (int i = 1; i <= k; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            q[j] += a[j];
        }
        maxA--;

        mi = INT_MAX;
        for (int j = 0; j < n; ++j)
        {
            if (b[j] == 0)
                continue;

            int cur = q[j] / b[j];
            mi = min(mi, cur);
        }

        if (mi > 0)
        {
            for (int j = 0; j < n; ++j)
            {
                q[j] -= mi * b[j];
            }
        }
        minB += mi;
        ans = max(ans, maxA + minB);
    }

    cout << ans << endl;

    return 0;
}
