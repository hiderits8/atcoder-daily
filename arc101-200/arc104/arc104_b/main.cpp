#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    string s;
    cin >> n >> s;

    vector<vector<int>> prefix(n + 1, vector<int>(4, 0));
    for (int i = 0; i < n; ++i)
    {
        prefix[i + 1] = prefix[i];
        if (s[i] == 'A')
            prefix[i + 1][0]++;
        if (s[i] == 'T')
            prefix[i + 1][1]++;
        if (s[i] == 'G')
            prefix[i + 1][2]++;
        if (s[i] == 'C')
            prefix[i + 1][3]++;
    }

    int ans = 0;

    for (int len = 2; len <= n; len += 2)
    {
        for (int i = 0; i + len <= n; ++i)
        {
            int j = i + len;
            int a = prefix[j][0] - prefix[i][0];
            int t = prefix[j][1] - prefix[i][1];
            int g = prefix[j][2] - prefix[i][2];
            int c = prefix[j][3] - prefix[i][3];
            if (a == t && g == c)
                ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
