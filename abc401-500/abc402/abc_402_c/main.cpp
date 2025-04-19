#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> remain(m);
    vector<vector<int>> ing_of_dishes(n + 1);

    for (int i = 0; i < m; ++i)
    {
        int k;
        cin >> k;
        remain[i] = k;
        for (int j = 0; j < k; ++j)
        {
            int a;
            cin >> a;
            ing_of_dishes[a].push_back(i);
        }
    }

    int res;
    for (auto rem : remain)
    {
        if (rem == 0)
            ++res;
    }

    for (int i = 0; i < n; ++i)
    {
        int b;
        cin >> b;
        if (b < ing_of_dishes.size())
        {
            for (auto dish : ing_of_dishes[b])
            {
                if (remain[dish] > 0)
                {
                    --remain[dish];
                    if (remain[dish] == 0)
                    {
                        ++res;
                    }
                }
            }
        }
        cout << res << endl;
    }

    return 0;
}