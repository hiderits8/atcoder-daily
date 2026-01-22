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
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i, n) cin >> p[i];
    vector<int> cnt(n, 0);
    rep(i, n)
    {
        cnt[(p[i] - i - 1 + n) % n]++;
        cnt[(p[i] - i + n) % n]++;
        cnt[(p[i] - i + 1 + n) % n]++;
    }

    int ans = *max_element(cnt.begin(), cnt.end());
    cout << ans << endl;

    return 0;
}