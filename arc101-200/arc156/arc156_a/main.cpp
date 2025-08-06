#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int cnt = count(s.begin(), s.end(), '1');
        if (cnt & 1)
        {
            cout << -1 << endl;
            continue;
        }
        bool f = false;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                if (s[i] == s[i + 1])
                    f = true;
            }
        }
        if (cnt != 2 || !f)
        {
            cout << cnt / 2 << endl;
            continue;
        }
        if (n == 3)
        {
            cout << -1 << endl;
            continue;
        }
        else if (n == 4 && s == "0110")
        {
            cout << 3 << endl;
            continue;
        }
        cout << 2 << endl;
    }
    return 0;
}
