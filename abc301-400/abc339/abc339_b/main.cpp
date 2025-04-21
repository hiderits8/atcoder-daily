#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<bool>> mp(h, vector<bool>(w, false));
    int o = 1000; // 上向き
    pair<int, int> cur = {0, 0};

    for (int i = 0; i < n; ++i)
    {
        int y = cur.first;
        int x = cur.second;
        if (!mp[y][x])
        {
            o++;
        }
        else
        {
            o--;
        }
        mp[y][x] = !mp[y][x];
        if (o % 4 == 0)
        {
            if (y != 0)
            {
                cur.first--;
            }
            else
            {
                cur.first = h - 1;
            }
        }
        else if (o % 4 == 1)
        {
            if (x != w - 1)
            {
                cur.second++;
            }
            else
            {
                cur.second = 0;
            }
        }
        else if (o % 4 == 2)
        {
            if (y != h - 1)
            {
                cur.first++;
            }
            else
            {
                cur.first = 0;
            }
        }
        else if (o % 4 == 3)
        {
            if (x != 0)
            {
                cur.second--;
            }
            else
            {
                cur.second = w - 1;
            }
        }
    }
    for (auto l : mp)
    {
        for (auto p : l)
        {
            if (p)
            {
                cout << "#";
            }
            else
            {
                cout << ".";
            }
        }
        cout << endl;
    }

    return 0;
}