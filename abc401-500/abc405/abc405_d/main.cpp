#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int h, w;
    cin >> h >> w;

    vector<vector<bool>> map(h, vector<bool>(w, false));
    set<pair<int, int>> next;

    for (int i = 0; i < h; i++)
    {
        string s;
        for (int j = 0; j < w; j++)
        {
            if (s[j] == '.')
            {
                map[i][j] = true;
            }
            else if (s[j] == 'E')
            {
                next.emplace(i, j);
            }
        }
    }

    return 0;
}