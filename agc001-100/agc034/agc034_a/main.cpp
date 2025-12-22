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
    int n, a, b, c, d;
    string s;
    cin >> n >> a >> b >> c >> d >> s;
    s = '#' + s + '#';

    auto can_reach = [&](int start, int end)
    {
        for (int i = start; i + 1 < end; ++i)
        {
            if (s[i] == '#' && s[i + 1] == '#')
                return false;
        }
        return true;
    };

    if (!can_reach(a, c) || !can_reach(b, d))
    {
        cout << "No" << endl;
        return 0;
    }

    if (d < c)
    {
        bool can_over = false;
        for (int i = b; i <= d; ++i)
        {
            if (s[i - 1] == '.' && s[i] == '.' && s[i + 1] == '.')
            {
                can_over = true;
            }
        }
        if (!can_over)
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}