#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int max = 1 << n;
        vector<bool> d(max, false);

        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '1')
            {
                d[i + 1] = true;
            }
        }

        int goal = (1 << n) - 1;
        vector<bool> visited(max, false);
        queue<int> q;
        q.push(0);
        visited[0] = true;
        bool ok = false;
        while (!q.empty())
        {
            int cur = q.front();
            q.pop();

            if (cur == goal)
            {
                ok = true;
                break;
            }

            for (int i = 0; i < n; ++i)
            {
                if (cur & (1 << i))
                    continue;
                int next = cur | (1 << i);
                if (d[next] || visited[next])
                {
                    continue;
                }
                visited[next] = true;
                q.push(next);
            }
        }

        cout << (ok ? "Yes" : "No") << endl;
    }

    return 0;
}