#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <iomanip>
#include <climits>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    int h, w, n;
    cin >> h >> w >> n;
    vector a(h + 1, vector<int>());
    vector b(w + 1, vector<int>());
    vector<bool> ux(h + 1), uy(w + 1);
    vector<bool> used(n);
    rep(i, n)
    {
        int x, y;
        cin >> x >> y;
        a[x].push_back(i);
        b[y].push_back(i);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int x;
            cin >> x;
            if (ux[x])
            {
                cout << 0 << endl;
            }
            else
            {
                ux[x] = true;
                int ans = 0;
                for (int e : a[x])
                {
                    if (!used[e])
                    {
                        used[e] = true;
                        ans++;
                    }
                }
                cout << ans << endl;
            }
        }
        else
        {
            int y;
            cin >> y;
            if (uy[y])
            {
                cout << 0 << endl;
            }
            else
            {
                uy[y] = true;
                int ans = 0;
                for (int e : b[y])
                {
                    if (!used[e])
                    {
                        used[e] = true;
                        ans++;
                    }
                }
                cout << ans << endl;
            }
        }
    }
    return 0;
}