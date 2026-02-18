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
    int n, k;
    cin >> n >> k;
    vector<int> p(n), q(n);
    rep(i, n)
    {
        cin >> p[i];
        p[i]--;
        q[p[i]] = i;
    }
    set<int> st;
    rep(i, k)
    {
        st.insert(q[i]);
    }

    int ans = *st.rbegin() - *st.begin();
    for (int i = k; i < n; i++)
    {
        st.erase(q[i - k]);
        st.insert(q[i]);
        ans = min(ans, *st.rbegin() - *st.begin());
    }
    cout << ans << endl;
    return 0;
}