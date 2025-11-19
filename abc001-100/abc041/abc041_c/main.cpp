#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    vector<pair<int, int>> a;
    rep(i, n)
    {
        int ai;
        cin >> ai;
        a.emplace_back(i + 1, ai);
    }

    sort(a.begin(), a.end(), [&](const pair<int, int> &p1, const pair<int, int> &p2)
         { return p1.second > p2.second; });

    rep(i, n)
    {
        auto [idx, h] = a[i];
        cout << idx << endl;
    }
    return 0;
}
