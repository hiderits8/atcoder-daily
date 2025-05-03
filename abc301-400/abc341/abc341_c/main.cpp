#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int h, w, n;
    string t;
    cin >> h >> w >> n >> t;
    vector<vector<bool>> map(h, vector<bool>(w, false));
    set<pair<int, int>> set;
    for (int i = 0; i < h; ++i)
    {
        string s;
        cin >> s;
        for (int j = 0; j < w; ++j)
        {
            if (s[j] == '.')
            {
                map[i][j] = true;
                set.insert({i, j});
            }
        }
    }

    int cnt = 0;
    for (auto p : set)
    {
        bool flg = true;
        int cy = p.first;
        int cx = p.second;
        if (!map[cy][cx])
        {
            continue;
        }
        for (int i = 0; i < t.size(); ++i)
        {
            if (t[i] == 'L')
            {
                if (cx > 0 && map[cy][cx - 1])
                {
                    --cx;
                }
                else
                {
                    flg = false;
                    break;
                }
            }
            else if (t[i] == 'R')
            {
                if (cx + 1 < w && map[cy][cx + 1])
                {
                    ++cx;
                }
                else
                {
                    flg = false;
                    break;
                }
            }
            else if (t[i] == 'U')
            {
                if (cy > 0 && map[cy - 1][cx])
                {
                    --cy;
                }
                else
                {
                    flg = false;
                    break;
                }
            }
            else if (t[i] == 'D')
            {
                if (cy < h && map[cy + 1][cx])
                {
                    ++cy;
                }
                else
                {
                    flg = false;
                    break;
                }
            }
        }
        if (flg)
        {
            ++cnt;
        }
    }
    cout << cnt << '\n';

    return 0;
}