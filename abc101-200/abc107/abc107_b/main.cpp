#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int h, w;
    cin >> h >> w;
    vector<vector<char>> map(h, vector<char>(w));

    set<int> isEmptyRow, isEmptyColumn;
    for (int i = 0; i < h; ++i)
    {
        bool flg = true;
        for (int j = 0; j < w; ++j)
        {
            char a;
            cin >> a;
            if (a == '#')
                flg = false;
            map[i][j] = a;
        }
        if (flg)
            isEmptyRow.insert(i);
    }

    for (int j = 0; j < w; ++j)
    {
        bool flg = true;
        for (int i = 0; i < h; ++i)
        {
            if (map[i][j] == '#')
                flg = false;
        }
        if (flg)
            isEmptyColumn.insert(j);
    }

    vector<vector<char>> ans;

    for (int i = 0; i < h; ++i)
    {
        if (isEmptyRow.count(i))
        {
            continue;
        }
        vector<char> row;

        for (int j = 0; j < w; ++j)
        {
            if (!isEmptyColumn.count(j))
            {
                row.push_back(map[i][j]);
            }
        }

        ans.push_back(row);
    }

    for (auto r : ans)
    {
        for (auto ch : r)
        {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
