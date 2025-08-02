#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    map<int, int> cnt;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        cnt[x]++;
    }
    vector<int> b(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> b[i];
    }
    for (auto &bi : b)
    {
        if (cnt.find(bi) != cnt.end() && cnt[bi] > 0)
        {
            cnt[bi]--;
        }
    }
    bool start = true;
    for (auto &[num, c] : cnt)
    {
        if (c > 0)
        {
            for (int i = 0; i < c; ++i)
            {
                if (!start)
                {
                    cout << " ";
                }
                cout << num;
                start = false;
            }
        }
    }
    return 0;
}