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
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n)
    {
        cin >> a[i];
        a[i] += 100;
    }
    int mean = accumulate(a.begin(), a.end(), 0) / n;
    int dispersion_floor = 0;
    rep(i, n)
    {
        dispersion_floor += (a[i] - mean) * (a[i] - mean);
    }
    mean += 1;
    int dispersion_ceil = 0;
    rep(i, n)
    {
        dispersion_ceil += (a[i] - mean) * (a[i] - mean);
    }
    cout << min(dispersion_floor, dispersion_ceil) << endl;

    return 0;
}