#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fn(int h, int w, int y, int x, set<pair<int, int>> &set)
{
    if (y - 1 >= 0 && x - 1 >= 0 && set.find({y - 1, x - 1}) != set.end())
    {
        set.erase({y - 1, x - 1});
        fn(h, w, y - 1, x - 1, set);
    }
    if (y - 1 >= 0 && set.find({y - 1, x}) != set.end())
    {
        set.erase({y - 1, x});
        fn(h, w, y - 1, x, set);
    }
    if (y - 1 >= 0 && x + 1 <= w - 1 && set.find({y - 1, x + 1}) != set.end())
    {
        set.erase({y - 1, x + 1});
        fn(h, w, y - 1, x + 1, set);
    }

    if (x - 1 >= 0 && set.find({y, x - 1}) != set.end())
    {
        set.erase({y, x - 1});
        fn(h, w, y, x - 1, set);
    }
    if (x + 1 <= w - 1 && set.find({y, x + 1}) != set.end())
    {
        set.erase({y, x + 1});
        fn(h, w, y, x + 1, set);
    }

    if (y + 1 <= h && x - 1 >= 0 && set.find({y + 1, x - 1}) != set.end())
    {
        set.erase({y + 1, x - 1});
        fn(h, w, y + 1, x - 1, set);
    }
    if (y + 1 <= h && set.find({y + 1, x}) != set.end())
    {
        set.erase({y + 1, x});
        fn(h, w, y + 1, x, set);
    }
    if (y + 1 <= h && x + 1 <= w - 1 && set.find({y + 1, x + 1}) != set.end())
    {
        set.erase({y + 1, x + 1});
        fn(h, w, y + 1, x + 1, set);
    }
}

int main()
{
    int h, w;
    cin >> h >> w;
    set<pair<int, int>> set;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; ++j)
        {
            char p;
            cin >> p;
            if (p == '#')
            {
                set.insert({i, j}); // (y,x)
            }
        }
    }

    int res = 0;
    while (!set.empty())
    {
        auto it = set.begin();
        auto [y, x] = *it;
        set.erase(it);
        fn(h, w, y, x, set);
        ++res;
    }

    cout << res << endl;
    return 0;
}