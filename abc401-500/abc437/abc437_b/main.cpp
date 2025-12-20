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
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<int>> mp(h, vector<int>(w));
    rep(i, h) rep(j, w) cin >> mp[i][j];

    set<int> c;
    rep(i, n)
    {
        int b;
        cin >> b;
        c.insert(b);
    }

    int cnt = 0;
    rep(i, h)
    {
        int tmp = 0;
        rep(j, w)
        {
            if (c.contains(mp[i][j]))
                tmp++;
        }
        cnt = max(cnt, tmp);
    }

    cout << cnt << endl;

    return 0;
}