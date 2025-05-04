#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<bool>> map(h, vector<bool>(w, false));
    for (int i = 0; i < h; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < w; j++)
        {
            if (s[j] == '#')
            {
                map[i][j] = true;
            }
        }
    }

    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < w; ++j)
        {
            if (map[i][j])
            {
                bool ok = false;
                if (ok || i > 0 && map[i - 1][j])
                {
                    ok = true;
                }
                if (ok || j > 0 && map[i][j - 1])
                {
                    ok = true;
                }
                if (ok || i < h - 1 && map[i + 1][j])
                {
                    ok = true;
                }
                if (ok || j + 1 < w && map[i][j + 1])
                {
                    ok = true;
                }
                if (!ok)
                {
                    cout << "No" << "\n";
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << "\n";
    return 0;
}