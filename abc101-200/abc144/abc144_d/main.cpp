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
    double a, b, x;
    cin >> a >> b >> x;

    double half = a * a * b / 2.0;
    double ans;

    if (x < half)
    {
        ans = atan(a * b * b / (2.0 * x));
    }
    else
    {
        ans = atan(2.0 * (a * a * b - x) / (a * a * a));
    }

    cout << fixed << setprecision(10) << ans * 180.0 / M_PI << endl;
    return 0;
}