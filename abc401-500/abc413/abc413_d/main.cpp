#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);

        bool has0 = false;
        bool all0 = true;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                has0 = true;
            }
            else
            {
                all0 = false;
            }
        }

        if (all0)
        {
            cout << "Yes" << endl;
            continue;
        }
        else if (has0)
        {
            cout << "No" << endl;
            continue;
        }

        sort(a.begin(), a.end(), [](ll a, ll b)
             { return abs(a) < abs(b); });

        bool ok = true;

        for (int i = 0; i < n - 2; ++i)
        {
            if (a[i] * a[i + 2] != a[i + 1] * a[i + 1])
            {
                ok = false;
                break;
            }
        }

        cout << (ok ? "Yes" : "No") << endl;
    }

    return 0;
}