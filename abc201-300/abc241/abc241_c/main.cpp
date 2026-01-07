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
    int n, cnt;
    cin >> n;
    vector<string> mp(n);
    rep(i, n) cin >> mp[i];
    bool ok = false;

    rep(i, n) rep(j, n)
    {
        if ((i + 5) < n)
        {
            cnt = 0;
            rep(k, 6) if (mp[i + k][j] == '#') cnt++;
            if (cnt >= 4)
                ok = true;
        }
        if ((j + 5) < n)
        {
            cnt = 0;
            rep(k, 6) if (mp[i][j + k] == '#') cnt++;
            if (cnt >= 4)
                ok = true;
        }
        if (((i + 5) < n) && ((j + 5) < n))
        {
            cnt = 0;
            rep(k, 6) if (mp[i + k][j + k] == '#') cnt++;
            if (cnt >= 4)
                ok = true;
        }
        if (((i - 5) >= 0) && ((j + 5) < n))
        {
            cnt = 0;
            rep(k, 6) if (mp[i - k][j + k] == '#') cnt++;
            if (cnt >= 4)
                ok = true;
        }
    }

    cout << (ok ? "Yes" : "No") << endl;

    return 0;
}