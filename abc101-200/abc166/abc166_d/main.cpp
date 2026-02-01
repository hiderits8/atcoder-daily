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
    ll x;
    cin >> x;
    for (ll a = -200; a <= 200; ++a)
    {
        for (ll b = -200; b <= 200; ++b)
        {
            if (a * a * a * a * a - b * b * b * b * b == x)
            {
                cout << a << " " << b << endl;
                return 0;
            }
        }
    }
    return 0;
}