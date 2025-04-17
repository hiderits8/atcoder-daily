#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cur = 0;
    int res = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == 'W')
        {
            res += i - cur;
            cur++;
        }
    }

    cout << res << endl;

    return 0;
}