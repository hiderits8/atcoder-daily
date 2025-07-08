#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    int n, c;
    cin >> n >> c;
    vector<int> a(n);
    ll sum = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        sum += a[i];
    }

    ll curMax = a[0], sumMax = a[0];
    for (int i = 1; i < n; ++i)
    {
        curMax = max((ll)a[i], curMax + a[i]);
        sumMax = max(curMax, sumMax);
    }

    ll curMin = a[0], sumMin = a[0];
    for (int i = 1; i < n; ++i)
    {
        curMin = min((ll)a[i], curMin + a[i]);
        sumMin = min(curMin, sumMin);
    }

    if (c > 1)
    {
        cout << max(sum, sum + sumMax * (c - 1)) << endl;
    }
    else if (c == 1)
    {
        cout << sum << endl;
    }
    else if (c <= 0)
    {
        cout << max(sum, sum + sumMin * (c - 1)) << endl;
    }

    return 0;
}
