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
    string s;
    int t;
    cin >> s >> t;

    int n = s.size();

    if (t > n)
    {
        cout << 0 << endl;
        return 0;
    }

    set<string> ans;

    for (int i = 0; i <= n - t; ++i)
    {
        ans.insert(s.substr(i, t));
    }
    cout << ans.size() << endl;
    return 0;
}