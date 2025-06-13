#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int n, ans = 0;
        cin >> n;

        vector<int> rate(n);
        for (int j = 0; j < n; ++j)
        {
            cin >> rate[j];
        }

        int min = n + 1;
        for (int j = n - 1; j >= 0; --j)
        {
            if (rate[j] < min && rate[j] <= j + 1)
            {
                ans++;
            }

            if (rate[j] < min)
            {
                min = rate[j];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
