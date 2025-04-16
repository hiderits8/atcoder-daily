#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    unordered_map<int, int> mp;
    for (auto x : v)
    {
        mp[x]++;
    }

    vector<int> cnt;
    for (auto &p : mp)
    {
        cnt.push_back(p.second);
    }

    sort(cnt.begin(), cnt.end(), greater<int>{});

    int keep = 0;
    for (int i = 0; i < min(k, (int)cnt.size()); ++i)
    {
        keep += cnt[i];
    }

    cout << n - keep << endl;
}