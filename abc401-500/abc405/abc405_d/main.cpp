#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int h, w;
    cin >> h >> w;
    vector<vector<char>> mp(h);
    vector<pair<int, int>> next;

    for (int i = 0; i < h; ++i)
    {
        string s;
        cin >> s;
        for (int j = 0; j < w; ++j)
        {
            mp[i].push_back(s[j]);
            if (s[j] == 'E')
                next.push_back({i, j});
        }
    }

    vector<pair<int, int>> tmp;

    while (!next.empty())
    {
        auto [curY, curX] = next.back();
        next.pop_back();

        if (curY - 1 >= 0 && mp[curY - 1][curX] == '.')
        {
            mp[curY - 1][curX] = 'v';
            tmp.push_back({curY - 1, curX});
        }
        if (curY + 1 <= h - 1 && mp[curY + 1][curX] == '.')
        {
            mp[curY + 1][curX] = '^';
            tmp.push_back({curY + 1, curX});
        }
        if (curX - 1 >= 0 && mp[curY][curX - 1] == '.')
        {
            mp[curY][curX - 1] = '>';
            tmp.push_back({curY, curX - 1});
        }
        if (curX + 1 <= w - 1 && mp[curY][curX + 1] == '.')
        {
            mp[curY][curX + 1] = '<';
            tmp.push_back({curY, curX + 1});
        }

        if (next.empty())
        {
            next = tmp;
            tmp.clear();
        }
    }

    for (auto vc : mp)
    {
        for (auto ch : vc)
        {
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}
