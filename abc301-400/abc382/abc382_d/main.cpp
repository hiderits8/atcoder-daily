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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> ans;

    auto f = [&](auto f, vector<int> a)
    {
        if (a.size() == n)
        {
            ans.push_back(a);
            return;
        }

        int l = 1;
        if (a.size() > 0)
            l = a.back() + 10;
        a.push_back(l);
        while (a.back() + 10 * (n - a.size()) <= m)
        {
            f(f, a);
            a.back()++;
        }
    };

    f(f, vector<int>());

    cout << ans.size() << endl;
    for (auto a : ans)
    {
        rep(i, n) cout << a[i] << " ";
        cout << endl;
    }

    return 0;
}