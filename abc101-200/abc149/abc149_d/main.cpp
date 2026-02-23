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
    int n, k;
    cin >> n >> k;
    int r, s, p;
    cin >> r >> s >> p;
    string t;
    cin >> t;
    int sz = t.size();
    vector<vector<char>> v(k);
    rep(i, sz) v[i % k].push_back(t[i]);
    ll ans = 0;
    for (auto vec : v)
    {
        int m = vec.size();
        char pre = ' ';
        rep(i, m)
        {
            if (vec[i] == 'r')
            {
                if (pre != 'p')
                {
                    ans += p;
                    pre = 'p';
                }
                else
                {
                    if (i != m - 1 && vec[i + 1] == 'r')
                    {
                        pre = ' ';
                    }
                    else
                    {
                        pre = 'p';
                    }
                }
            }
            else if (vec[i] == 's')
            {
                if (pre != 'r')
                {
                    ans += r;
                    pre = 'r';
                }
                else
                {
                    if (i != m - 1 && vec[i + 1] == 's')
                    {
                        pre = ' ';
                    }
                    else
                    {
                        pre = 'r';
                    }
                }
            }
            else
            {
                if (pre != 's')
                {
                    ans += s;
                    pre = 's';
                }
                else
                {
                    if (i != m - 1 && vec[i + 1] == 'p')
                    {
                        pre = ' ';
                    }
                    else
                    {
                        pre = 's';
                    }
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}