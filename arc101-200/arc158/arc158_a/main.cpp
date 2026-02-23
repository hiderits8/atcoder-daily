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
    int t;
    cin >> t;
    while (t--)
    {
        ll x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        if ((x1 + x2 + x3) % 3 != 0)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            int eo = x1 % 2 + x2 % 2 + x3 % 2;
            if (eo != 0 && eo != 3)
            {
                cout << -1 << endl;
                continue;
            }
        }

        ll a = (x1 + x2 + x3) / 3;

        ll d = abs(x1 - a) + abs(x2 - a) + abs(x3 - a);
        cout << d / 4 << endl;
    }
    return 0;
}