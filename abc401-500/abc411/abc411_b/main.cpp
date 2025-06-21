#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> sum(n + 1);

    sum[0] = 0;
    sum[1] = 0;
    for (int i = 1; i < n; i++)
    {
        int d;
        cin >> d;
        sum[i + 1] = sum[i] + d;
    }

    for (int i = 1; i < n; ++i)
    {
        for (int j = i + 1; j <= n; ++j)
        {
            cout << sum[j] - sum[i];
            if (j != n)
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}