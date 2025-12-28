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

    vector<pair<int, int>> st;
    st.reserve(n);

    rep(i, n)
    {
        int a;
        cin >> a;
        if (!st.empty() && st.back().first == a)
        {
            st.back().second++;
            if (st.back().second == 4)
            {
                st.pop_back();
            }
        }
        else
        {
            st.push_back({a, 1});
        }
    }
    int ans = 0;
    for (auto [v, c] : st)
        ans += c;
    cout << ans << endl;
    return 0;
}