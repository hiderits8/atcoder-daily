#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, m, h, k;
    string s;
    cin >> n >> m >> h >> k >> s;

    set<pair<int, int>> mp;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        mp.insert({x, y});
    }

    pair<int, int> pos = {0, 0};
    for (auto ch : s)
    {
        h--;
        switch (ch)
        {
        case 'R':
            pos.first++;

            break;

        case 'L':
            pos.first--;

            break;

        case 'U':
            pos.second++;

            break;

        case 'D':
            pos.second--;

            break;

        default:
            break;
        }

        if (h < 0)
        {
            cout << "No\n";
            return 0;
        }
        if (h < k && mp.count(pos))
        {
            mp.erase(pos);
            h = k;
        }
    }
    cout << "Yes\n";

    return 0;
}