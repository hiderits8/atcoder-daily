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

    vector<int> cnt(n + 1, 0);

    for (int a = 1; 2 * a * a <= n; ++a)
    {
        int a2 = a * a;
        for (int b = a + 1;; ++b)
        {
            int s = a2 + b * b;
            if (s > n)
                break;
            if (cnt[s] < 2)
                cnt[s]++;
        }
    }

    vector<int> ans;
    for (int i = 5; i <= n; ++i)
    {
        if (cnt[i] == 1)
            ans.push_back(i);
    }

    int sz = ans.size();
    cout << sz << endl;
    rep(i, sz)
    {
        if (i != 0)
            cout << " ";
        cout << ans[i];
    }
    cout << endl;

    return 0;
}