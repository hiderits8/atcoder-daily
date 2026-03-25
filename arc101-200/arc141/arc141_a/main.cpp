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
        ll n;
        cin >> n;
        int len = to_string(n).size();
        for (int i = 2; i <= len; i++)
        {
            if (len % i)
                continue;
            int m = len / i;
            string s = to_string(n);
            string x = s.substr(0, m);
            bool ok = true;
            rep(j, i)
            {
                string t = s.substr(j * m, m);
                if (t != x)
                    ok = false;
            }
            if (ok)
            {
                cout << x << endl;
                break;
            }
        }
    }
    return 0;
}