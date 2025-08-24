#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> s[i];
    }
    vector<int> p(n, 0);
    for (int i = 0; i < m; ++i)
    {
        int x = 0, y = 0;
        for (auto &v : s)
        {
            if (v[i] == '0')
            {
                x++;
            }
            else
            {
                y++;
            }
        }

        if (x > y)
        {
            for (int j = 0; j < n; ++j)
            {
                if (s[j][i] == '1')
                {
                    p[j]++;
                }
            }
        }
        else
        {
            for (int j = 0; j < n; ++j)
            {
                if (s[j][i] == '0')
                {
                    p[j]++;
                }
            }
        }
    }

    int mx = *max_element(p.begin(), p.end());
    bool first = true;
    for (int i = 0; i < n; ++i)
    {
        if (p[i] != mx)
            continue;
        if (!first)
            cout << " ";
        first = false;
        cout << i + 1;
    }
    cout << endl;
    return 0;
}