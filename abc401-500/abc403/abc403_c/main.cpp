#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, m, q;
    cin >> n >> m >> q;
    map<pair<int, int>, bool> map;
    vector<bool> all(n + 1, false);
    for (int i = 0; i < q; i++)
    {
        int a, x, y;
        cin >> a;
        switch (a)
        {
        case 1:
            cin >> x >> y;
            map[{x, y}] = true;
            break;
        case 2:
            cin >> x;
            all[x] = true;
            break;
        case 3:
            cin >> x >> y;
            cout << (all[x] || map.count({x, y}) > 0 ? "Yes" : "No") << endl;
            break;
        default:
            return 0;
        }
    }

    return 0;
}