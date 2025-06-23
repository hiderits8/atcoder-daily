#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, q;
    cin >> n >> q;
    vector<pair<int, int>> map(n);

    for (int i = 0; i < n; ++i)
    {
        map[i] = {n - i, 0};
    }

    int move = 0;
    for (int i = 0; i < q; ++i)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            char dir;
            cin >> dir;
            auto [x, y] = map.back();
            if (dir == 'R')
            {
                map.emplace_back(x + 1, y);
            }
            else if (dir == 'L')
            {
                map.emplace_back(x - 1, y);
            }
            else if (dir == 'U')
            {
                map.emplace_back(x, y + 1);
            }
            else if (dir == 'D')
            {
                map.emplace_back(x, y - 1);
            }
            move++;
        }
        else if (type == 2)
        {
            int p;
            cin >> p;
            auto &point = map[n - p + move];
            cout << point.first << " " << point.second << endl;
        }
    }
    return 0;
}
