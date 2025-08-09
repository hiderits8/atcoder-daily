#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    vector<ll> mi(a[n - 1] + 1, 0);
    int cnt = 0;
    int prev = 0;
    for (int i = 0; i < n; ++i)
    {
        if (prev == a[i])
        {
            cnt++;
        }
        else
        {
            int cur = a[i];
            for (int j = prev + 1; j <= cur; ++j)
            {
                mi[j] = mi[j - 1] + (n - cnt);
            }
            cnt++;
            prev = cur;
        }
    }

    while (q--)
    {
        int b;
        cin >> b;
        if (b > a[n - 1])
        {
            cout << -1 << endl;
            continue;
        }
        b--;
        cout << mi[b] + 1 << endl;
    }

    return 0;
}