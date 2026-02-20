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
    vector<pair<int, int>> v(n);
    rep(i, n)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    int ans = 0;
    rep(i, n) rep(j, n)
    {
        if (v[i].first < v[j].first && v[i].second > v[j].second)
        {
            if (binary_search(v.begin(), v.end(), make_pair(v[i].first, v[j].second)) && binary_search(v.begin(), v.end(), make_pair(v[j].first, v[i].second)))
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}