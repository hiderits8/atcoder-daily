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
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    vector<string> ss(n - m + 1);
    rep(i, n - m + 1)
    {
        ss[i] = s.substr(i, m);
    }

    int ans = 1e8;
    for (auto si : ss)
    {
        int tmp = 0;
        rep(i, m)
        {
            int snum = si[i] - '0', tnum = t[i] - '0';
            if (tnum > snum)
            {
                tmp += snum + 10 - tnum;
            }
            else
            {
                tmp += snum - tnum;
            }
        }
        ans = min(ans, tmp);
    }

    cout << ans << endl;
    return 0;
}