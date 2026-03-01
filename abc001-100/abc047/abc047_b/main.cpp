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
    int w, h, n;
    cin >> w >> h >> n;
    int xmin = 0, xmax = w, ymin = 0, ymax = h;
    rep(i, n)
    {
        int x, y, a;
        cin >> x >> y >> a;
        if (a == 1)
            xmin = max(xmin, x);
        else if (a == 2)
            xmax = min(xmax, x);
        else if (a == 3)
            ymin = max(ymin, y);
        else
            ymax = min(ymax, y);
    }
    int area = max(0, xmax - xmin) * max(0, ymax - ymin);
    cout << area << "\n";
    return 0;
}