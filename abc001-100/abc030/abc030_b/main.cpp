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
    int n, m;
    cin >> n >> m;
    n %= 12;

    double s, l;
    l = double(m) * 6.0;
    s = double(n) * 30.0 + double(m) * 0.5;
    double ans = abs(s - l);
    ans = min(ans, 360.0 - ans);

    printf("%.5f\n", ans);

    return 0;
}