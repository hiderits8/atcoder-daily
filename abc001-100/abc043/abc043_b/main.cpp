#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(void)
{
    string s;
    cin >> s;
    string ans = "";
    int n = s.size();
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '0')
        {
            ans += '0';
        }
        else if (s[i] == '1')
        {
            ans += '1';
        }
        else if (!ans.empty())
        {
            ans.pop_back();
        }
    }

    cout << ans << endl;

    return 0;
}
