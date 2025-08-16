#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;

    vector<int> dist(n, 0);
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        dist[l]++;
        dist[r + 1]--;
    }

    for (int i = 0; i < n; ++i)
    {

        if (i > 0)
        {
            dist[i] += dist[i - 1];
        }
        if (dist[i] % 2 == 1)
        {
            swap(s[i], t[i]);
        }
    }

    cout << s << endl;
    return 0;
}