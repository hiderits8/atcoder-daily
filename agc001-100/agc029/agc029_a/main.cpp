#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    long long cur = 0;
    long long res = 0;
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