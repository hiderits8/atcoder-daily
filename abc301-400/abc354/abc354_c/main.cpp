#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<tuple<int, int, int>> vec;
    for (int i = 0; i < n; ++i)
    {
        int a, c;
        cin >> a >> c;
        vec.push_back({a, c, i + 1});
    }
    sort(vec.begin(), vec.end(), [](const auto &a, const auto &b)
         { return get<0>(a) > get<0>(b); });

    vector<int> ans;
    int minC = INT_MAX;
    for (const auto &[a, c, idx] : vec)
    {
        if (c < minC)
        {
            ans.push_back(idx);
            minC = c;
        }
    }

    sort(ans.begin(), ans.end());
    int s = ans.size();
    cout << s << endl;

    for (int i = 0; i < s; ++i)
    {
        cout << ans[i];
        if (i != s - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}