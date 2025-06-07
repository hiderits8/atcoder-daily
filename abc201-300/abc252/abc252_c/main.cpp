#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<vector<pair<int, int>>> num_index(10);

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < 10; j++)
        {
            num_index[s[j] - '0'].emplace_back(i, j);
        }
    }

    int ans = INT_MAX;
    for (auto &ni : num_index)
    {
        map<int, int> visited;
        int max_t = 0;
        for (auto &[slot, idx] : ni)
        {
            int tmp_t;
            if (!visited.count(idx))
            {
                tmp_t = idx;
            }
            else
            {
                tmp_t = visited[idx] * 10 + idx;
            }

            if (tmp_t > max_t)
            {
                max_t = tmp_t;
            }
            visited[idx]++;
        }
        if (max_t < ans)
        {
            ans = max_t;
        }
    }

    cout << ans << endl;

    return 0;
}