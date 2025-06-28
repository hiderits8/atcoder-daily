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

        if (n == 2)
        {
            int a, b;
            cin >> a >> b;
            if (b > a * 2)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
            continue;
        }

        vector<int> v(n - 2);
        int left, right;
        for (int i = 0; i < n; ++i)
        {
            int a;
            cin >> a;
            if (i == 0)
            {
                left = a;
            }
            else if (i == n - 1)
            {
                right = a;
            }
            else
            {
                v[i - 1] = a;
            }
        }
        sort(v.begin(), v.end());
        int idx = 0, sz = v.size();

        int ans = 2;

        while (left * 2 < right)
        {
            int nextidx = idx;
            while (nextidx < sz && v[nextidx] <= left * 2)
            {
                nextidx++;
            }

            if (nextidx == idx)
            {
                ans = -1;
                break;
            }

            idx = nextidx;
            left = v[nextidx - 1];
            ans++;
        }

        cout << ans << endl;
    }

    return 0;
}